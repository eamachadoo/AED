//
// Created by João Filipe Guedes on 31/10/2022.
//

#ifndef AED_TIMETABLE_H
#define AED_TIMETABLE_H
#include <vector>
#include <map>
#include "Lecture.h"

using namespace std;

class Timetable{
private:
    vector<Lecture> lectures_;

public:
    /**
     * Default Constructor.
     */
    Timetable();
    /**
     * Overloaded Constructor.
     * @param 1. lectures
     */
    explicit Timetable(vector<Lecture>& lectures);
    /**
     * Getter Function: retrieves the private vector lectures_, making it
     * available outside of the class.
     * @return Vector lectures_
     */
    vector<Lecture> getLectures() const;
    /**
     * Sorting function: it sorts the timetables by days, if the day is the same
     * it first sorts the classes with the lesser start hour.
     * @brief Complexidade : O(n log n)
     */
    void sortTimetable();
    /**
     * Function adds a new element (lecture) at the end of the list,
     * after its current last element - it uses the push_back modifier.
     * @brief Complexidade : O(1)
     * @param 1. lecture
     */
    void addLecture(const Lecture& lecture);

};

#endif //AED_TIMETABLE_H
