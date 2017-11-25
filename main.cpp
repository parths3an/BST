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

cout << "\nTesting find... \n";
cout << "finding one by one is order of: 25, 24,20,21,28,30 \n";
int a[] = {25,24,20,21,28,30};
int b[] = { -1,4,234, -234, 23, 25, 20, 33};

for (int i=0; i < sizeof(a)/sizeof(a[0]); i++)
{
	bool tempBool = b1.find(a[i]);

	if ( tempBool)
	{
		cout <<	a[i] << " is present in the tree\n";
	}
	else 
	{
	cout << a[i] << " is not present in the tree\n";
	}
}

for (int i=0; i < sizeof(b)/sizeof(b[0]); i++)
{
	bool tempBool = b1.find(b[i]);

	if ( tempBool)
	{
		cout <<	b[i] << " is present in the tree\n";
	}
	else 
	{
	cout << b[i] << " is not present in the tree\n";
	}
}




return 0;
}
