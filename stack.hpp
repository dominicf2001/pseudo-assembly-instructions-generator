#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_

#include <new>
#include <cassert>

////////////////////////////////////////////////////////////////////////////
//           
template<typename T>
class Node {
public:
  Node() : next(0) {};
  Node(T n) : next(0), data(n) {};
  Node<T> *next;
  T data;
};


////////////////////////////////////////////////////////////////////////////
//

template <typename T>
class stack {
public:
  stack     () : tos(0) {};
  stack     (const stack<T>&);
  ~stack    ();
  void      swap      (stack<T>&);
  stack<T>& operator= (stack<T> rhs) { swap(rhs); return *this; };
  bool      empty     () const { return tos == 0; };
  bool      full      () const;
  T         top       () const { return tos->data; };
  T         pop       ();
  void      push      (const T&);

private:
  Node<T>   *tos;
};

template <typename T>
void stack<T>::swap(stack<T>& rhs) {
  Node<T> *temp = tos;
  tos = rhs.tos;
  rhs.tos = temp;
}

template <typename T>
stack<T>::stack(const stack<T>& actual) : stack() {
  Node<T> *temp = actual.tos;
  Node<T> *bottom;

  while (temp != 0) {
    if (tos == 0) {
      tos = new Node<T>(temp->data);
      bottom = tos;
    } else {
      bottom->next = new Node<T>(temp->data);
      bottom = bottom->next;
    }
    temp = temp->next;
  }
}

template <typename T>
void stack<T>::push(const T& data) {
  assert(!full());
  Node<T> *temp = new Node<T>(data);
  temp->next = tos;
  tos = temp;  
}

template <typename T>
T stack<T>::pop() {
  assert(!empty());
  T result = tos->data;
  Node<T> *temp = tos;
  tos = tos->next;
  delete temp;
  return result;
}

template <typename T>
bool stack<T>::full() const {
  Node<T> *temp = new(std::nothrow) Node<T>();
  if (temp == 0) return true;
  delete temp;
  return false;
}

template <typename T>
stack<T>::~stack() {
  Node<T> *temp;
  while (tos != 0) {
    temp = tos;
    tos = tos->next;
    delete temp;
  }
}


#endif
