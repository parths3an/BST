/**
 * Declaring BST.H FILE
 */ 
#ifndef BST_H
#define BST_H

#include "Node.h"

class BST
{
    public: 
        //Default constructor
        BST(): root(nullptr), size(0){};

        //destructor
        ~BST();

        //Accessor function 
        //Get the root of the tree
        Node* getRoot();

        //Get the data of the root
        int getRootData();
        
        //Get size of the tree
        unsigned int getSize();

        //Print tree in inOrder
        void printInOrder();

        //Print tree in postOrder
        void printPostOrder();
    
        //Print tree in preOrder
        void printPreOrder();

        //Mutator funcitons     
        /** 
         * Insert: This function will return true or 
         *         false. 
         * True: If the data was successfully insert/was not present 
         *       in the tree before.
         * False: If the data was already present in the tree 
         */ 
        bool insert(int newData);

        /** 
         * Find: This function will return true or 
         *         false. 
         * True: If the data was found in the bst then true.
         * False: If the data was not found in the bst.  
         */
        bool find(int findData);

        /** 
         *  deleteNode: This function will return true or 
         *         false. 
         * True: If the data was successfully deleted in the tree before.
         * False: If the data was not found and not deleted.
         */
        bool deleteNode(int delData);

        /** 
         * deleteAll: This function will be used in the 
         *            destructor of the BST class and will use DFS 
         *            and delete nodes from leaf to root one by one. 
         *           This can be also used to delete some sub tree as well. 
         *           you can explicitly call this function by passing in 
         *           appropriate root node.   
         */
        void deleteAll(Node* rootNode);
        
        

    private:
        Node* root;             //Root of the tree
        unsigned int size;      //Size of the tree
};



#endif //BST_H