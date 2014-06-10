/*
 * Q2.cpp
 *
 *  Created on: Jun 10, 2014
 *      Author: Mike
 */
#ifndef Q2_CPP
#define Q2_CPP

#include <iostream>
#include "LinkedListSingle.cpp"


class Q2 {
public:
	int getKthLast(LinkedListSingle& lls, int k){

		Node* current = lls.head;
		if (current == nullptr) return -1;

		Node* kLast = nullptr;
		int i = 0;
		while (current != nullptr) {
			i++;
			if (i > k) {
				kLast = kLast->next;
			} else if (i == k) {
				kLast = lls.head;
			}
			current = current->next;
		}
		if (kLast != nullptr) return kLast->value;
		else return -1;
	};
};


int main(void) {

	Q2 q;
	LinkedListSingle lls;
	lls.append(1);
	lls.append(2);
	lls.append(3);
	lls.printList();
	std::cout << 3 << "th Last Element is: " << q.getKthLast(lls, 3) << std::endl;
	std::cout << 4 << "th Last Element is: " << q.getKthLast(lls, 4) << std::endl;
	lls.append(4);
	lls.append(5);
	lls.append(6);
	lls.append(7);
	lls.append(8);
	lls.append(9);
	lls.append(10);
	lls.printList();
	std::cout << 3 << "th Last Element is: " << q.getKthLast(lls, 3) << std::endl;




	return 0;
}
#endif
