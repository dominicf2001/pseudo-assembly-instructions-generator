#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date:        
// Author:   
//
// Description: Class definition for a log entry.
//
// 
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 

////////////////////////////////////////////////////////////
class Date { 
public:
  Date() : day("01"), month("Jan"), year(2000) {};
  Date(String day_, String month_, int year_) {
    day = day_;
    month = month_;
    year = year_;
  };
  friend  std::ostream& operator<<(std::ostream&, const Date&);

private:
    String  day, month;
    int     year;
};

////////////////////////////////////////////////////////////
class Time {
  public:
  Time() : hour(0), minute(0), second(0) {};
  Time(int hour_, int minute_, int second_) {
    hour = hour_;
    minute = minute_;
    second = second_;
  };
  friend  std::ostream& operator<<(std::ostream&, const Time&);
  private:
    int     hour, minute, second;
};



////////////////////////////////////////////////////////////
class LogEntry {
public:
            LogEntry() : host(""), date(Date()), time(Time()), request(""), status(""), number_of_bytes(0) {};
            LogEntry(String);
    friend  std::ostream& operator<<(std::ostream&, const LogEntry&);
    String  getHost() const { return host; };
    int     getBytes() const { return number_of_bytes; };

private:
    String  host;
    Date    date;
    Time    time;
    String  request;
    String  status;
    int     number_of_bytes;
};


////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>   parse       (std::istream&);
void                    output_all  (std::ostream&, const std::vector<LogEntry> &);
void                    by_host     (std::ostream&, const std::vector<LogEntry> &);
int                     byte_count  (const std::vector<LogEntry>&);

#endif
 
