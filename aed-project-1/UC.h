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
    /**
     * Constructor.
     * @brief Complexidade : O(n)
     * @param 1. uc_code
     * @param 2. name
     * @param 3. ects
     */
    UC(string uc_code, string name, float ects);
    /**
     * Constructor.
     * @brief Complexidade : O(n)
     * @param 1. uc_code
     * @param 2. name
     * @param 3. ects
     * @param 4. uc_classes
     */
    UC(string uc_code, string name, float ects, vector <Class*> uc_classes);
    /**
     * Getter function: helps the function by providing
     * the UC code.
     * @brief Complexidade : O(n)
     * @return
     */
    string getCode();
    /**
     * Setter Function: helps change, set the code.
     * @brief Complexidade : O(1)
     * @param 1. uc_code
     */
    void Setcode(string uc_code);
    /**
     * Getter Function: helps get the name from the file.
     * @brief Complexidade : O(1)
     * @return Name of student.
     */
    string getName();
    /**
     * @brief Complexidade : O(1)
     * @return Credits
     */
    float getCredits() const;
    /**
     * Setter Function: modifies the value of the ects by
     * assigning it a new one.
     * @brief Complexidade : O(n)
     * @param 1. ects
     */
    void setCredits(float ects);
    /**
     * Getter fucntion: gets the UC Classes.
     * @brief Complexidade : O(n)
     * @return Vector containing the UC classes.
     */
    vector<Class*>getUcClasses();
    /**
     * Setter function: it's given an element from the vector obtained
     * through the getter class (getUcClasses), and modifies the values
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

};


#endif //AED_UC_H
