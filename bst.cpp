/**
 * bst.cpp
 */

#include "Node.h"
#include "bst.h"

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
{ 
    if(root == nullptr)
    {
        return;
    }
    else 
    {
        pInOrderHelper(root);
    }
}

void BST::pInOrderHelper(Node* tempRoot)
{
    //Left-Root-Right
    if (tempRoot == nullptr)
    {
        return; 
    }

    //Go to the left sub-tree
    pInOrderHelper(tempRoot->left);

    //Print/visit the node
    cout << tempRoot->data << " ";

    //Go to the right sub-tree
    pInOrderHelper(tempRoot->right);
}

void BST::printPreOrder()
{
    if(root == nullptr)
    {
        return;
    }
    else 
    {
        pPreOrderHelper(root);
    }
}

void BST::pPreOrderHelper(Node* tempRoot)
{
    //Root - left - right
    if(tempRoot == nullptr)
    {
        return;
    }

    //Visiting the node
    cout << tempRoot->data << " ";

    //Go left
    pPreOrderHelper(tempRoot->left);

    //Go right
    pPreOrderHelper( tempRoot->right); 
}

void BST::printPostOrder()
{
    //Left- right - root
    if(root == nullptr)
    {
        return;
    }
    else 
    {
        pPostOrderHelper(root);
    }

}

void BST::pPostOrderHelper(Node* tempRoot)
{
    //Left- right - root
    if(tempRoot == nullptr)
    {
        return;
    } 
    //Go left
    pPostOrderHelper(tempRoot->left);

    //Go right
    pPostOrderHelper(tempRoot->right);
    
    //Visiting Node
    cout << tempRoot->data << " ";

}

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
