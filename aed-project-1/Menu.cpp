//
// Created by Eduardo Afonso Soares Ferreira Machado on 04/11/2022.
//

#include "Menu.h"
#include <iostream>
#include <vector>

using namespace std;

//Menu::Menu(Reader data)

void Menu::MenuClean() {
    for (int i = 0; i<100;i++){
        cout << endl;
    }
}

void Menu::MenuTitle(){
    cout << "-------------------------" << endl;
    cout << "LEIC TIMETABLE MANAGER" << endl;
    cout << "-------------------------" << endl;
}

void Menu::MainMenu(int list_size) {
    list_size = 15;
    MenuTitle();

    cout << "\tMainMenu\n";
    cout <<"(1) UCS" << endl;
    cout <<"(2) Students" << endl;
    cout <<"(0) Exit" << endl;
    cout << "->";

    vector<int> inputs = {0,1,2};
    int input;
    cin >> input;

    switch(input){
        case 1:
            MenuClean();
            UcsMenu(list_size);
            break;
        case 2:
            MenuClean();
            StudentsMenu(list_size);
            break;
        case 0:
            exit(0);
        default:
            break;
    }
    Menu::UcsMenu(){
        MenuTitle()
    }




}
