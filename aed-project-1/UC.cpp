//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#include "UC.h"
#include <utility>
#include <vector>

using namespace std;

UC::UC()=default;

UC::UC(string uc_code, string name, float ects) : uc_code_(std::move(uc_code)), name_(std::move(name)), ects_(ects) {}

UC::UC(string uc_code, string name, float ects, vector<Class*> uc_classes) :
uc_code_(std::move(uc_code)), name_(std::move(name)), ects_(ects), uc_classes_(std::move(uc_classes)) {}

float UC::getCredits() const {return ects_;}

void UC::setCredits(float ects) {
    this -> ects_ = ects;
}

string UC::getCode() {return uc_code_;}

void UC::Setcode(std::string uc_code) {
    this -> uc_code_ = std::move(uc_code);
}

string UC::getName() {return name_;}

void UC::addUcClass(Class *c) {
    uc_classes_.push_back(c);
}

vector<Class *> UC::getUcClasses() {return uc_classes_;}

void UC::setUcClasses(std::vector<Class*> v)  {
    this ->uc_classes_ = std::move(v);
}