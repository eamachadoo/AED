//
// Created by Eduardo Afonso Soares Ferreira Machado on 03/11/2022.
//

#include "Node.h"

Node::Node() = default;

Node::Node(Student *student) : student_(student){}

Student *Node::getStudent() {return student_;}

Node *Node::getRightBranch() {return right_;}

Node *Node::getLeftBranch() {return left_;}

Node *Node::insert(Node *, Student *student) {}

void Node::search(Node *, int upCode) {}

void Node::searchP(Node *, int upCode) {}

void Node::show(Node *) {}

int Node::treeTraversal(Node *, int, std::string choice) {}
