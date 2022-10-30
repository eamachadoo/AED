//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#include "Class.h"
#include <string>

using namespace std;


Class::Class(string week_day,string start_hour,string duration, string type) {
    this ->week_day = week_day;
    this -> start_hour = start_hour;
    this-> duration = duration;
    this -> type = type;


}