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
     * Constructor.
     * @brief Complexidade : O(1)
     */
    UC();
    /**
    * @brief Complexidade : O(n)
    * @param 1. uc_code
    * @param 2. name
    * @param 3. ects
    */
    UC(string uc_code, string name, float ects);
    /**
     * @brief Complexidade : O(n)
     * @param 1. uc_code
     * @param 2. name
     * @param 3. ects
     * @param 4. uc_classes
     */
    UC(string uc_code, string name, float ects, vector <Class*> uc_classes);
    /**
    * @brief Complexidade : O(n)
    * @return
    */
    string getCode();
    /**
     * @brief Complexidade : O(n)
     * @param 1. uc_code
     */
    void Setcode(string uc_code);
    /**
     * @brief Complexidade : O(n)
     * @return
     */
    string getName();
    /**
     * @brief Complexidade : O(n)
     * @return
     */
    float getCredits() const;
    /**
    * @brief Complexidade : O(n)
    * @param 1. ects
    */
    void setCredits(float ects);
    /**
    * @brief Complexidade : O(n)
    * @return
    */
    vector<Class*>getUcClasses();
    /**
     * @brief Complexidade : O(n)
     * @param 1. v
     */
    void setUcClasses(std::vector<Class*> v);
    /**
     * @brief Complexidade : O(n)
     * @param c
     */
    void addUcClass(Class* c);

};


#endif //AED_UC_H
