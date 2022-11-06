#include <iostream>
#include "GestorHorarios.h"

using namespace std;

int main() {
    //GestorHorarios gh;
    //gh.
        bool loop = true;
        while (loop) {
            cout << "-------------------------" << endl;
            cout << " GESTOR DE HORARIOS LEIC" << endl;
            cout << "-------------------------" << endl;
            cout << "\tMenu Principal\n";
            cout << "(1) Ocupação de turmas/UC/ano" << endl;
            cout << "(2) Horário de aluno" << endl;
            cout << "(3) Estudantes em determinada turma/UC/ano" << endl;
            cout << "(0) Sair";
            cout << endl;
            cout << "->";

            vector<int> inputs = {0, 1, 2, 3};
            int input;
            cin >> input;

            switch (input) {
                case 1:
                    cout << "(1) Turma" << endl;
                    cout << "(2) UC" << endl;
                    cout << "(3) Ano" << endl;
                    int input2;
                    cin >> input2;
                    if (input2==1){

                    }
                    if (input2==2){

                    }
                    if(input2 == 3)
                    loop = false;
                    break;
                case 2:
                    cout << "coco" << endl;
                    break;
                case 3:
                    cout << "pp" << endl;
                    break;
                case 0:
                    loop = false;
                    break;
                default:
                    break;
            }
        }
}
