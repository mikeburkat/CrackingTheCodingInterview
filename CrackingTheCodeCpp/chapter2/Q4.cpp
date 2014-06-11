/*
 * Q2.cpp
 *
 *  Created on: Jun 10, 2014
 *      Author: Mike
 */
#ifndef Q3_CPP
#define Q3_CPP

#include <iostream>
#include "LinkedListSingle.cpp"


class Q3 {
public:
	LinkedListSingle* splitOn(LinkedListSingle* list, int x) {

		LinkedListSingle* smaller = new LinkedListSingle();
		LinkedListSingle* larger = new LinkedListSingle();

		Node* current = list->head;

		while (current != nullptr) {
			if (current->value < x)	smaller->append(current->value);
			else larger->append(current->value);
			Node* prev = current;
			current = current->next;
			delete prev;
		}

		list->head = larger->head;
		return smaller;
	};
};


int main(void) {

	Q3 q;
	LinkedListSingle lls;
	lls.append(3);
	lls.append(8);
	lls.append(1);
	lls.append(2);
	lls.append(9);
	lls.append(10);
	lls.append(4);
	lls.append(6);
	lls.append(7);
	lls.append(5);
	lls.printList();

	LinkedListSingle* small = q.splitOn(&lls, 5);

	small->printList();
	lls.printList();

	return 0;
}
#endif
