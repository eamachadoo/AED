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
    * Default Constructor.
    */
    Student();
    /**
     * Overloaded Constructor.
    * @param 1. upCode
    * @param 2. name
    */
    Student(int upCode, string name);
    /**
     * Overloaded Constructor.
     * @param 1. upCode
     */
    Student(int upCode);
    /**
     * Overloaded Constructor.
     * @param 1. name
     */
    Student(string name);
    /**
     * Overloaded Constructor.
     * @param 1. upCode
     * @param 2. name
     * @param 3. horario
     */
    Student(int upCode, string name, Timetable* horario);
    /**
     * Getter Function: that returns a constant (unchangeable)
     * integer variable, the UP code; allows the outside code to read
     * the private int variable.
     * @brief Complexidade : O(1)
     * @return Constant Integer (upCode_)
     */
    int getStudentCode() const;
    /**
     * Getter Function: retrieves the string variable of name_, which
     * provides the student name; allows the outside code to read
     * the private int variable.
     * @brief Complexidade : O(1)
     * @return String Variable (name_)
     */
    string getStudentName(const string& name) const;
    /**
     * Getter Function: retrieves the value of the pointer lectures;
     * which provides the time of the class, and allows the outside
     * code to read the private pointer.
     * @brief Complexidade : O(1)
     * @return Vector (horarioEstudante_)
     */
    Timetable* getStudentTimetable();

};

#endif //AED_STUDENT_H
