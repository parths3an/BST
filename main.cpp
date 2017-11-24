/** 
 * main.cpp
 */
#include "Node.h"
#include "BST.h"

using namespace std;

int main()
{

cout << "Created a new BST Object... \n";
BST b1;
cout << "Testing empty size... size should be zero and it is: " << b1.getSize() << endl;
cout << "Testing insert... Inserting 25...\n";
b1.insert(25);
cout << "Root of the tree should be 25 and it is...: " << b1.getRootData() << endl;

cout << "Insertig 25, 20, 21, 28, 30, 24..." << endl;



return 0;
}
