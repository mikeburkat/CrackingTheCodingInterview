/*
 * Q1.cpp
 *
 *  Created on: Jun 10, 2014
 *      Author: Mike
 */
#ifndef Q1_CPP
#define Q1_CPP

#include <iostream>
#include "LinkedListSingle.cpp"


class Q1 {
public:
	void removeDuplicates(LinkedListSingle& lls){

		Node* current = lls.head;
		if (current == nullptr) return;

		Node* checker;
		while (current->next != nullptr) {
			checker = current;
			while (checker->next != nullptr) {
				if (current->value == checker->next->value) {
					//delete node at checker
					Node* toDel = checker->next;
					checker->next = checker->next->next;
					delete toDel;
					if (checker->next == nullptr) break;
				}
				checker = checker->next;
			}
			current = current->next;
		}
		std::cout << "remove Duplicates" << std::endl;
	};
};


//int main(void) {
//
//	LinkedListSingle lls;
//	lls.append(1);
//	lls.append(2);
//	lls.append(3);
//	lls.append(4);
//	lls.append(5);
//	lls.append(6);
//	lls.append(3); // duplicate
//	lls.append(7);
//	lls.append(5); // duplicate
//	lls.append(3); // duplicate
//	lls.printList();
//
//	Q1 q;
//	q.removeDuplicates(lls);
//	lls.printList();
//
//	return 0;
//}
#endif
