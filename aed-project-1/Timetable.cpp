//
// Created by Eduardo Afonso Soares Ferreira Machado on 20/10/2022.
//

#include "Timetable.h"

Timetable::Timetable() = default;

Timetable::Timetable(vector<Lecture>& lectures) : lectures_(lectures){}

vector<Lecture> Timetable::getLectures() const {return lectures_;}

void Timetable::sortTimetable() {}

void Timetable::addLecture(const Lecture &lecture) :{}

