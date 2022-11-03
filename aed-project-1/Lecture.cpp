//
// Created by Eduardo Afonso Soares Ferreira Machado on 01/11/2022.
//

#include "Lecture.h"

Lecture::Lecture() {}

Lecture::Lecture(std::string uc_code, std::string weekday, float start_hour, float duration, std::string type) {
    this -> uc_code_ = uc_code;
    this -> weekday_ = weekday;
    this -> start_hour_ = start_hour;
    this -> duration_ = duration;
    this -> type_ = type;
}

string Lecture::getUcCode() {return uc_code_;}

string Lecture::getWeekday() {return weekday_;}

float Lecture::getStartHour() {return start_hour_;}

float Lecture::getDuration() {return duration_;}

string Lecture::getType() {return type_;}

Lecture::Lecture(const Lecture &l) : uc_code_(l.uc_code_), weekday_(l.weekday_),
start_hour_(l.start_hour_),duration_(l.duration_),type_(l.type_) {}
