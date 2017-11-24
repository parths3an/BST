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

int BST::getRootData()
{
    return root->data;
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
        return true; 
    }

    //If root is not null 
    //Look for the place where to insert the node. 
    bool inserted = false; 
    Node* cur  = root;
    Node* prev = root;

    while(!inserted)
    {
        prev = cur; 
        //Go left
        if( newData < cur->data )
        {
            cur = cur->left;
            if(cur == nullptr)
            {
                Node* newLNode = new Node(newData);
                cur = newLNode;
                cur->parent = prev; 
                prev->left = cur;
                inserted = true; 
                return true;
            }
        }
        else if ( newData > cur->data)//Go right
        {
            cur = cur->right;
            if( cur == nullptr)
            {
                Node* newRNode = new Node(newData);
                cur = newRNode;
                cur->parent = prev; 
                prev->right = cur;
                inserted = true; 
                return true; 
            }
        }
        else //if curr->data == newData
        {
            cout << "Data already exist in the BST; Can't add duplicate\n";
            inserted  = true; 
            return true; 
        }
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
