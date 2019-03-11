/*
 * Person.cpp
 *
 *  Created on: Mar 9, 2019
 *      Author: hsin
 */

#include "Person.h"
#include <iostream>


Person::Person(string defaultName) {
	// intialize name using "this"
	this -> age = 30;
    this -> name = defaultName;
    cout << "Memory location of this:" << this << endl;
}

// same effect as this(for disambiguaty) without using "this"
Person::Person(string newname, int age): name(newname),age(age) {
}

string Person::getName() {
	return this->name;
}

void Person::setName(string newName) {
	cout << "Name is being set from " + name + " to " + newName << endl;
	name = newName;
}

int Person::getAge() {
    return age;
}
