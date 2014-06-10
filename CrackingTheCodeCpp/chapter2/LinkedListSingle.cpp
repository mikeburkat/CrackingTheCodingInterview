/*
 * LinkedListSingle.cpp
 *
 *  Created on: Jun 10, 2014
 *      Author: Mike
 */
#ifndef LLS_CPP
#define LLS_CPP


#include <iostream>
using namespace std;


class Node {
public:
	Node* next;
	int value;
	Node(int v, Node* ptr = nullptr) :
			value(v), next(ptr) { };
};

class LinkedListSingle {
public:
	Node* head;
	LinkedListSingle() :
			head(nullptr) { };

	void append(int i) {
		Node* n = new Node(i);

		if (head == nullptr) {
			head = n;
			return;
		}

		Node* current = head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = n;
	}



	void printList() {
		Node* current = head;
		if (head == nullptr) {
			cout << "empty" << endl;
			return;
		}

		while (current != nullptr) {
			cout << current->value << "->";
			current = current->next;
		}
		cout << "end" <<endl;
	}
};

#endif
