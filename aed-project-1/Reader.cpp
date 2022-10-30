//
// Created by Eduardo Afonso Soares Ferreira Machado on 29/10/2022.
//

#include "Reader.h"
#include "Student.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void Reader::read_info_students()
{
    fstream in("students_classes.csv");
    string line, word, word1;

    if(in.is_open())
    {
        while(getline(in,line))
        {
            stringstream str(line);

            getline(str,word,',');
            Student student = Student(word);

            auto it = find(students.begin(),students.end(),student); // ver se é ou não um estudante já existente
            if (it!= students.end()) //se já existe, usar estudante do vetor
            {
                student = *it; //estudante dentro do vetor
            }
            else
            {
                students.push_back(student);
            }
            getline(str,word,',');
            student.set_Student_name(word);

            getline(str,word,',');
            getline(str,word1,',');

            student.add_uc_class(word,word1);


        }
    }
}
