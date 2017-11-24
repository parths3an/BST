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
