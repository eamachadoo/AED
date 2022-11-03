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
    /**
     *
     */
    Node();
    /**
     *
     * @param student
     */
    explicit Node(Student* student);
    /**
     *
     * @return
     */
    Student* getStudent();
    /**
     *
     * @return
     */
    Node* getRightBranch();
    /**
     *
     * @return
     */
    Node* getLeftBranch();
    /**
     *
     * @param student
     * @return
     */
    Node* insert(Node*, Student* student);
    /**
     *
     * @param upCode
     */
    void search(Node*, int upCode);
    /**
     *
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
