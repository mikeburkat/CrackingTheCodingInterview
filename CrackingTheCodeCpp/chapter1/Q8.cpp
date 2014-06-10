/*
 * Q8.cpp
 *
 *  Created on: Jun 7, 2014
 *      Author: mike
 */

#include <iostream>
#include <string>
using namespace std;

bool checkIfRotation(string s1, string s2) {

	if (s1.length() != s2.length()) {
		return false;
	} else {
		string s1s1 = s1 + s1;
		int found = s1s1.find(s2);

		if (found < 0)
			return false;
		else
			return true;

	}
}

//int main(void) {
//
//	string s1 = "waterbottle";
//	string s2 = "erbottlewat";
//
//	cout << s1 << " " << s2 << " ";
//	cout << ((checkIfRotation(s1, s2)) ? "true" : "false") << endl;
//
//	string s3 = "snakeoil";
//	string s4 = "liosnake";
//
//	cout << s3 << " " << s4 << " ";
//	cout << ((checkIfRotation(s3, s4)) ? "true" : "false") << endl;
//
//
//
//	return 0;
//}

