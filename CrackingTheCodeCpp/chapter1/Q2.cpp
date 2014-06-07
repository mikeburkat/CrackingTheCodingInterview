/*
 * Q2.cpp
 *
 *  Created on: Jun 6, 2014
 *      Author: Mike Burkat
 */

#include <iostream>
using namespace std;


char* reverse(char* str) {

	int end = 0;
	while (str[end] != '\0') {
		end++;
	}
	end--;

	char temp;
	int begin = 0;
	while (begin < end) {
		temp = str[begin];

		str[begin] = str[end];
		str[end] = temp;

		begin++;
		end--;
	}
	return str;
}


//int main(void) {
//	char test1[] = "Hello World!";
//	cout << test1 << " | ";
//	cout << reverse(test1) << endl;
//	return 0;
//}


