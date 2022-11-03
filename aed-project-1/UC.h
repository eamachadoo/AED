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
    UC();
    UC(string uc_code, string name, float ects);
    UC(string uc_code, string name, float ects, vector <Class*> uc_classes);
    string getCode();
    void Setcode(string uc_code);
    string getName();
    float getCredits() const;
    void setCredits(float ects);
    vector<Class*>getUcClasses();
    void setUcClasses(std::vector<Class*> v);
    void addUcClass(Class* c);

};


#endif //AED_UC_H
