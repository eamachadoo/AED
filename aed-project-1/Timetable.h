//
// Created by João Filipe Guedes on 31/10/2022.
//

#ifndef AED_TIMETABLE_H
#define AED_TIMETABLE_H
#include <vector>
#include "Lecture.h"

using namespace std;

class Timetable{
private:
    vector<Lecture> lectures_;

public:
    Timetable();
    explicit Timetable(vector<Lecture>& lectures);
    vector<Lecture> getLectures() const;
    void sortTimetable();
    void addLecture(const Lecture& lecture);

};

#endif //AED_TIMETABLE_H
