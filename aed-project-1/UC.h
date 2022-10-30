//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#ifndef AED_UC_H
#define AED_UC_H
#include <string>

using namespace std;

class UC {

private:
    string uc_code;
    string class_code;

public:

    UC(string uc_code, string class_code);
    void set_uc_code(string uc_code);
    void set_class_code(string class_code);
};


#endif //AED_UC_H
