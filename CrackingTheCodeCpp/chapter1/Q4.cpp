/*
 * Q2.cpp
 *
 *  Created on: Jun 6, 2014
 *      Author: Mike Burkat
 */

#include <iostream>
using namespace std;


char* replaceSpaces(char* str) {

	int end = 0;
	int lastChar = 0;
	while (str[end] != '\0') {
		if (str[end] != ' ') lastChar = end;
		end++;
	}
	end--;

	cout << lastChar << " : " << end << endl;

	int cursor = lastChar;
	while (end >= 0) {
		if (str[cursor] != ' '){
			str[end--] = str[cursor--];
		} else {
			str[end--] = '0';
			str[end--] = '2';
			str[end--] = '%';
			cursor--;
		}
	}
	return str;
}


//int main(void) {
//	char test1[] = "Mr John Smith    ";
//	cout << test1 << "|" << endl;
//	cout << replaceSpaces(test1) << endl;
//}


