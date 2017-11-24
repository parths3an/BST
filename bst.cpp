/**
 * bst.cpp
 */

#include "Node.h"
#include "BST.h"

BST::~BST()
{
//Delete all node one-by-by using DFS and from bottom 
deleteAll(root);
}

Node* BST::getRoot()
{
    return root;
}

unsigned int BST::getSize()
{
    return size;
}

void BST::printInOrder()
{}

void BST::printPreOrder()
{}

void BST::printPostOrder()
{}

bool BST::insert(int newData)
{
    //If root is null
    if(root == nullptr)
    {
        Node* newNode = new Node(newData);
        root = newNode; 
    }

    //If root is not null 
    //Look for the place where to insert the node. 
    bool inserted = false; 
    Node* cur  = root;

    while(!inserted)
    {
        if(cur->data == new)


    }

    return true; //temp return 
}

bool BST::find(int findData)
{
    return true; //temp return 
}

bool BST::deleteNode(int delData)
{
    return true; //temp return 
}

void BST::deleteAll(Node* rootNode)
{
    
}
