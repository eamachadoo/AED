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
    /**
     * Constructor.
     * @brief Complexidade : O(1)
     */
    Timetable();
    /**
     * @brief Complexidade : O(n)
     * @param 1. lectures
     */
    explicit Timetable(vector<Lecture>& lectures);
    /**
    * @brief Complexidade : O(n)
    * @return
    */
    vector<Lecture> getLectures() const;
    /**
    * @brief Complexidade : O(n)
    */
    void sortTimetable();
    /**
     * @brief Complexidade : O(n)
     * @param 1. lecture
     */
    void addLecture(const Lecture& lecture);

};

#endif //AED_TIMETABLE_H
