// myApp.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <tchar.h>

#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node* next;
};


void printList(struct Node* n)
{
	cout << "current List : " << "\t";
	while (n != NULL) {
		cout<< n->data << "\t";
		n = n->next;
	}
	cout << "\n";
}

struct Node* deleteElement(struct Node* n, int index)
{
	// write your code here. 
	// The function takes the pointer to the first node as input argument, and index within the range [0, length(list)-1].
	// The function then deletes the corresponding node at index and returns the pointer to the new first node.
	
}

int main()
{
	struct Node* list[5];

	// allocate memory for the list
	for (int i = 0; i < 5; i++)
		list[i] = new Node;

	// initialize the list
	for (int i = 0; i < 5; i++)
	{
		list[i]->data = i*2;
		if (i == 4)
			list[i]->next = NULL;
		else
			list[i]->next = list[i + 1];
	}

	Node* header = list[0]; // header points to the first element of the list
	// print the list
	printList(header);

	//delete element at a specific index
	header = deleteElement(header, 4);

	// print the list
	printList(header);

	// de-allocate memory for the list
	Node* n = header;
	while (n != NULL)
	{
		delete(n);
		n = n->next;
	}
	return 0;
}
