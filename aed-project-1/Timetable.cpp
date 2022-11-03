//
// Created by Eduardo Afonso Soares Ferreira Machado on 20/10/2022.
//

#include "Timetable.h"
#include "Lecture.h"

Timetable::Timetable() = default;

Timetable::Timetable(vector<Lecture>& lectures) : lectures_(lectures){}

vector<Lecture> Timetable::getLectures() const {return lectures_;}

static const string weekDays[]{"Monday","Tuesday","Wednesday","Thursday","Friday"};

void Timetable::sortTimetable(){
    std::sort(lectures_.begin(), lectures_.end(), [](Lecture a, Lecture b){
        int n1 = distance(weekDays, find(weekDays, weekDays + weekDays ->size(), a.getWeekday()));
        int n2 = distance(weekDays, find(weekDays, weekDays + weekDays ->size(), a.getWeekday()));
        if(n1==n2){return a.getStartHour() < b.getStartHour();}
        return n1<n2;});
    }

void Timetable::addLecture(const Lecture &lecture)
{
    lectures_.push_back(lecture);
}

