//
// Created by Eduardo Afonso Soares Ferreira Machado on 04/11/2022.
//

#include "GestorHorario.h"
#include <iostream>
#include <string>

using namespace std;

GestorHorario::GestorHorario()= default;

void GestorHorario::ReaderOutput() {

}

void GestorHorario::menu() {

}

void GestorHorario::loginScreen() {
    char input;

    bool done = false;

    while (!done){
        cout << endl;
        cout << "---------------" << endl;
        cout << " Horarios LEIC " << endl;
        cout << "---------------" << endl;
        cout << endl;
        cout << "Opcões de escolha :" << endl;
        cout << "A. Visualizar Horario de aluno " <<endl;
        cout << "B. Ocupação de turmas " << endl;
        cout << "C. Estudantes em determinada secção" << endl;
        cout << "D. Estudantes e respetivo numero de unidades curriculares" << endl;
        cout << endl;
        cout << "X. Encerrar programa" << endl;
        cout << endl;
        cout << "Escolha o procedimento desejado : " << endl;
        cin >> input ;
        cin.ignore();

        input = tolower(input);
        done = false;

        switch(input){
            case 'A':
                signInUI();
                break;
            case 'B':
                break;
            case 'C':
                break;
            case 'D':
                break;

        }
    }
}
