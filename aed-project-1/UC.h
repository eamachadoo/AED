//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#ifndef AED_UC_H
#define AED_UC_H
#include <string>
#include "Class.h"
#include <list>

using namespace std;

class UC {

private:
    string class_code_;
    string uc_code_;
    float ects_;
    vector<Class*> uc_classes_;
    string name_;

public:
    /**
     * Default Constructor.
     * @brief Complexidade : O(1)
     */
    UC();
    UC(string uc_code, string class_code);
    /**
     * Overloaded Constructor.
     * @brief Complexidade : O(n)
     * @param 1. uc_code
     * @param 2. name
     * @param 3. ects
     */
    UC(string uc_code, string name, float ects);
    /**
     * Overloaded Constructor.
     * @brief Complexidade : O(n)
     * @param 1. uc_code
     * @param 2. name
     * @param 3. ects
     * @param 4. uc_classes
     */
    UC(string uc_code, string name, float ects, vector <Class*> uc_classes);
    /**
     * Getter function: retrieves the value of the vector uc_code, which is
     * defined as private.
     * @brief Complexidade : O(n)
     * @return
     */

     string getCode();
    /**
     * Setter Function: it's given an element and modifies the values
     * of the private vector.
     * @brief Complexidade : O(n)
     * @param 1. uc_code
     */
    void Setcode(string uc_code);
    /**
     * Getter Function: retrieves the string name_ from private.
     * @brief Complexidade : O(n)
     * @return Name of student.
     */
     int getNumStudent();

    string getName();
    /**
     * Getter function: retrieves the float ects_ from private.
     * @brief Complexidade : O(n)
     * @return Float element etcs_
     */
    float getCredits() const;
    /**
     * Setter Function: it's given an element and modifies the values
     * of the float ects_.
     * @brief Complexidade : O(n)
     * @param 1. ects
     */
    void setCredits(float ects);
    /**
     * Getter function: retrieves/reads the private vector uc_classes,
     * making it available to the program outside of the class.
     * @brief Complexidade : O(n)
     * @return Vector containing the UC classes.
     */
    vector<Class*>getUcClasses();
    /**
     * Setter function: it's given an element from the vector obtained
     * through the getter class (getUcClasses), and updates the values
     * of the private vector.
     * @brief Complexidade : O(n)
     * @param 1. v
     */
    void setUcClasses(std::vector<Class*> v);
    /**
     * This function inserts new element at the end of vector
     * and increases size of vector by one.
     * @brief Complexidade : O(n)
     * @param c
     */
    void addUcClass(Class* c);
    void addStudent();

};


#endif //AED_UC_H
