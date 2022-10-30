//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#include "UC.h"

using namespace std;

UC::UC(std::string uc_code, std::string class_code) {
    this -> uc_code = uc_code;
    this -> class_code = class_code;
}

void UC::set_class_code(std::string class_code) {
    this->class_code = class_code;
}
void UC::set_uc_code(std::string uc_code) {
    this->uc_code= uc_code;
}