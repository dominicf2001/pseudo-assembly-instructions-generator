//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
// 

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector> 

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES: s == "[IP address] - - [day/month/year:hour:minute:second -timezone] "request /~user protocol" status byte size"
// ENSURES: if (vec.length() != 10) construct default logentry
//          
LogEntry::LogEntry(String s) : LogEntry() {
    std::vector<String> vec = s.split(' ');
    if (vec.size() == 10) {
      host = vec[0];
    
      std::vector<String> dateVec(vec[3].split('[')[1].split('/'));
      std::vector<String> timeVec(dateVec[2].split(':'));    
      date = Date(dateVec[0], dateVec[1], timeVec[0].toInt());
      time = Time(timeVec[1].toInt(), timeVec[2].toInt(), timeVec[3].toInt());
      status = vec[8];
      request = vec[5].split('"')[1];
      number_of_bytes = (vec[9].toInt() >= 0) ? vec[9].toInt() : 0;
    }
}

////////////////////////////////////////////////////////// 
// REQUIRES: 
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    char line[200];
    while(in.getline(line, 200)) {
      LogEntry entry(line);
      result.push_back(entry);
    }
    return result;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
  if (date.day < 10) out << '0';
  out << date.day << '/';
  out << date.month << '/' << date.year;
  return out;
}

std::ostream& operator<<(std::ostream& out, const Time& time) {
  if (time.hour < 10) out << '0';
  out << time.hour << ':';
  if (time.minute < 10) out << '0';
  out << time.minute << ':';
  if (time.second < 10) out << '0';
  out << time.second;
  return out;
}

std::ostream& operator<<(std::ostream& out, const LogEntry& entry) {
  if (entry.host != "") {
    out << "Host: " << entry.host << ", " <<
      "Date: " << entry.date << ", " <<
      "Time: " << entry.time << ", " <<
      "Request: " << entry.request << ", " <<
      "Status: " << entry.status << ", " <<
      "Bytes: " << entry.number_of_bytes;
    
  }
  return out; 
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry>& vec) {
  auto it = vec.begin();
  int i = 0;
  for (; it != vec.end(); ++it) {
    out << vec[i] << std::endl;
    ++i;
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES:
// ENSURES:
//
void by_host(std::ostream& out, const std::vector<LogEntry>& vec) {
  auto it = vec.begin();
  int i = 0;
  for (; it != vec.end(); ++it) {
    out << "Host: " << vec[i].getHost() << std::endl;  
    ++i;
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES: getBytes() >= 0
// ENSURES: count >= 0
//
int byte_count(const std::vector<LogEntry>& vec) {
  int count = 0;
  auto it = vec.begin();
  int i = 0;
  for (; it != vec.end(); ++it) {
    count += vec[i].getBytes();  
    ++i;
  }
  return count;
}

 
