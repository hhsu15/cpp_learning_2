/*
 * Person.h
 *
 *  Created on: Mar 9, 2019
 *      Author: hsin
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string name;
public:
	//constructor
	Person() { name="Hsin"; }; //inline implementation
	//method overloading if different params are expected
	Person(string defaultName);

	void setName(string newName);
	string getName();
};

#endif /* PERSON_H_ */
