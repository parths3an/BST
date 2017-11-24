/** 
 * main.cpp
 */
#include "Node.h"
#include "bst.h"

using namespace std;

int main()
{

cout << "Created a new BST Object... \n";
BST b1;
cout << "Testing empty size... size should be zero and it is: " << b1.getSize() << endl;
cout << "\nTesting insert... Inserting 25...\n";
b1.insert(25);
cout << "Root of the tree should be 25 and it is...: " << b1.getRootData() << endl;

cout << "Insertig 25,24,28,20,21..." << endl;
b1.insert(24);
b1.insert(20);
b1.insert(21);
b1.insert(28);
b1.insert(30);

cout << "\n\nTesting the DFS printing algos: \n \n";
cout << "Testing inOrder traversal: It should be:  20 21 24 25 28 30" << endl;
b1.printInOrder();
cout << endl;

cout << "\nTesting preOrder traversal: It should be: 25 24 20 21 28 30\n" << endl;
b1.printPreOrder();
cout << endl;

cout << "\nTesting postOrder traversal: It should be:  21 20 24 30 28 25\n" << endl;
b1.printPostOrder();
cout << endl;

return 0;
}
