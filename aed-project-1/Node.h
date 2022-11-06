//
// Created by Eduardo Afonso Soares Ferreira Machado on 03/11/2022.
//

#ifndef AED_NODE_H
#define AED_NODE_H

#include "Student.h"
#include <iostream>

using namespace std;

class Node {
private :
    Student* student_;
    Node* right_;
    Node* left_;

public:
    /**
     * Default Constructor.
     */
    Node();
    /**
     * Overloaded Constructor.
     * @param 1. student
     */
    explicit Node(Student* student);
    /**
     * Getter Function: retrieves the value of student, making
     * it available outside the function.
     * @brief Complexidade: O(1)
     * @return Student *student_
     */
    Student* getStudent();
    /**
     * Getter Function: retrieves the value of right_,
     * making it available outside the function.
     * @brief Complexidade: O(1)
     * @return Node *right_
     */
    Node* getRightBranch();
    /**
     * Getter Function: retrieves the value of left_,
     * making it available outside the function.
     * @brief Complexidade: O(1)
     * @return Node *left_
     */
    Node* getLeftBranch();
    /**
     * @param 1. student
     * @return
     */
    Node* insert(Node*, Student* student);
    /**
     * @param upCode
     */
    void search(Node*, int upCode);
    /**
     * @param upCode
     */
    void searchP(Node*, int upCode);
    /**
     *
     */
    void show(Node*);
    /**
     *
     * @param choice
     * @return
     */
    static int treeTraversal(Node*, root, string choice);
};


#endif //AED_NODE_H
