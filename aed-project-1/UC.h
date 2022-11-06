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
     */
    UC();
    /**
     * Overloaded Constructor.
     * @param 1. uc_code
     * @param 2. class_code
     */
    UC(string uc_code, string class_code);
    /**
     * Overloaded Constructor.
     * @param 1. uc_code
     * @param 2. name
     * @param 3. ects
     */
    UC(string uc_code, string name, float ects);
    /**
     * Overloaded Constructor.
     * @param 1. uc_code
     * @param 2. name
     * @param 3. ects
     * @param 4. uc_classes
     */
    UC(string uc_code, string name, float ects, vector <Class*> uc_classes);
    /**
     * Getter function: retrieves the value of the vector uc_code, which is
     * defined as private and makes it available outside the class.
     * @brief Complexidade : O(1)
     * @return
     */
     string getCode();
    /**
     * Setter Function: sets the value of the private variable, in this case it
     * changes the value of the vector uc_code.
     * @brief Complexidade : O(1)
     * @param 1. uc_code
     */
    void Setcode(string uc_code);
    /**
     *
     * @return
     */
    string getName();
    /**
     * Getter function: retrieves the value of the float ects_ from private
     * making it available outside the class.
     * @brief Complexidade : O(1)
     * @return Float etcs_
     */
    float getCredits() const;
    /**
     * Setter Function: it's given an element and modifies the values
     * of the float ects_.
     * @brief Complexidade : O(1)
     * @param 1. ects
     */
    void setCredits(float ects);
    /**
     * Getter function: retrieves/reads the private vector uc_classes,
     * making it available to the program outside of the class.
     * @brief Complexidade : O(1)
     * @return Vector containing the UC classes.
     */
    vector<Class*>getUcClasses();
    /**
     * Setter function: used to set the variable value of the elements in the
     * vector uc_classes_.
     * @brief Complexidade : O(1)
     * @param 1. v
     */
    void setUcClasses(std::vector<Class*> v);
    /**
     * This function inserts new element at the end of vector
     * and increases size of vector by one - it uses the push_back
     * modifier.
     * @brief Complexidade : O(1)
     * @param c
     */
    void addUcClass(Class* c);
};


#endif //AED_UC_H
