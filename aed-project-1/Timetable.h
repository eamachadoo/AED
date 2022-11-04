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
     * Constructor.
     * @brief Complexidade : O(1)
     */
    Timetable();
    /**
     * Overloaded Constructor.
     * @brief Complexidade : O(n)
     * @param 1. lectures
     */
    explicit Timetable(vector<Lecture>& lectures);
    /**
     * Getter Function: retrieves the private vector lectures_, making it
     * available outside of the class.
     * @brief Complexidade : O(n)
     * @return Vector lectures_
     */
    vector<Lecture> getLectures() const;
    /**
     * Sorting function: it sorts the length of lectures. ????
     * @brief Complexidade : O(n log n)
     */
    void sortTimetable();
    /**
     * Function adds a new element (lecture) at the end of the list,
     * after its current last element.
     * @brief Complexidade : O(1)
     * @param 1. lecture
     */
    void addLecture(const Lecture& lecture);

};

#endif //AED_TIMETABLE_H
