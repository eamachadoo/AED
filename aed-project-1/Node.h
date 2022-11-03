//
// Created by Eduardo Afonso Soares Ferreira Machado on 03/11/2022.
//

#ifndef AED_NODE_H
#define AED_NODE_H

#include "Student.h"
#include <iostream>

class Node {
private :
    Student* student_;
    Node* right_;
    Node* left_;

public:
    Node();
    explicit Node(Student* student);
    Student* getStudent();
    Node* getRightBranch();
    Node* getLeftBranch();
    Node* insert(Node*, Student* student);
    void search(Node*, int upCode);
    void searchP(Node*, int upCode);
    void show(Node*);
    static int treeTraversal(Node*, root, string choice);
};


#endif //AED_NODE_H
