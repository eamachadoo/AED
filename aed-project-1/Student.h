//
// Created by Eduardo Afonso Soares Ferreira Machado on 29/10/2022.
//

#ifndef AED_STUDENT_H
#define AED_STUDENT_H

#include"Timetable.h"
#include <string>

using namespace std;

class Student {
private:
    int upCode_;
    string name_;
    Timetable *horarioEstudante_;

public:
    /**
    * @brief Complexidade : O(1)
    * Constructor.
    */
    Student();
    /**
    * @brief Complexidade : O(n)
    * @param 1. upCode
    * @param 2. name
    */
    Student(int upCode, string name);
    /**
     * @brief Complexidade : O(n)
     * @param 3. upCode
     * @param 4. name
     * @param 5. horario
     */
    Student(int upCode, string name, Timetable* horario);
    /**
    * @brief Complexidade : O(n)
    * @return
    */

    int getStudentCode() const;
    /**
     * @brief Complexidade : O(n)
     * @return
     */
    string getStudentName() const;
    /**
    * @brief Complexidade : O(n)
    * @return
    */
    Timetable* getStudentTimetable();
};

#endif //AED_STUDENT_H
