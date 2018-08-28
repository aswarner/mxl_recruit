/*-----------------------------------------------------------------------------
* merge_checker.cpp
* 
* NAME: Yourname Here
* ---------------------------------------------------------------------------*/

#include <iostream>
// You can add additional libraries if you need them.

using namespace std;

// Linked list singly-linked node struct, including int values
struct Node
{
    int value;
    Node *next;
};

// Put complexity solution here!
Node* check_merge(Node* a, Node* b) {
  // Put your solution code here!
	return NULL;
}

// Run test(s) of check_merge and print displays, results, etc. as applicable.
int main() {
	// You can add additional unit tests here as you feel appropriate, to show
	// the robustness of your solution. Helper functions are encouraged to make
	// unit tests more modular.

	// TEST 1: Nominal test with two lists (Author: Joseph Yates)
	// Build two linked lists, have one point to a common node
	Node* one = NULL;
	Node* two = NULL;
	Node* index = NULL;
	Node* common = NULL;
	Node* result = NULL;
	
	one = new Node;
	one->value = 1;
	index = one;
	for (int ii = 2; ii <= 5; ii++) {
	    index->next = new Node;
	    index = index->next;
	    index->value = ii;
	    index->next = NULL;
	    if (ii == 3) {
	    	common = index;
	    }
	}

	two = new Node;
	two->value = 7;
	index = two;
	for (int jj = 8; jj <= 10; jj++) {
	    index->next = new Node;
	    index = index->next;
	    index->value = jj;
	    index->next = NULL;
	}
	// Re-assign tail of list two from NULL to common, create common tail
	index->next = common;
	
	// Display lists
	index = one;
	cout << "List One:\n";
	while (index != NULL) {
	    cout << index->value << '-';
	    index = index->next;
	}
	cout << "\n\n";

	index = two;
	cout << "List Two:\n";
	while (index != NULL) {
	    cout << index->value << '-';
	    index = index->next;
	}
	cout << "\n\n";

	// Display function expected and actual results
	result = check_merge(one, two);
	cout << "Expected Common Node Address: " << common << "\n";
	cout << "Result Common Node Address: " << result;
}