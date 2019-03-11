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
	int age;

public:
	//constructor
	Person():name("Hsin"), age(30) {}; //inline implementation
	//method overloading if different params are expected
	Person(string defaultName);
	//another method overloading
    Person( string newname, int age);

	void setName(string newName);
	string getName();
	int getAge();
};

#endif /* PERSON_H_ */
