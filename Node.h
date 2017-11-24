/**
 * declaration of the node class
 */

#ifndef NODE_H
#define NODE_H

#include<iostream>

using namespace std;
 class Node 
 {
 public: 
    //constructor
    Node(int newData):data(newData),right(nullptr), left(nullptr), parent(nullptr){}

    int data;
    Node* right;
    Node* left;
    Node* parent;
 };
#endif
