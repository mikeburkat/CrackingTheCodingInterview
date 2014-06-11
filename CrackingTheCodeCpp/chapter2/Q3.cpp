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
	void deleteNode(Node* n) {
		if (n != nullptr && n->next != nullptr){
			Node* temp = n->next;
			n->value = n->next->value;
			n->next = n->next->next;
			delete temp;
		}
	};
};


//int main(void) {
//
//	Q3 q;
//	LinkedListSingle lls;
//	lls.append(1);
//	lls.append(2);
//	lls.append(3);
//	lls.printList();
//
//	q.deleteNode(lls.head->next);
//	lls.printList();
//
//	q.deleteNode(lls.head->next);
//	lls.printList();
//
//
//	return 0;
//}
#endif
