/*
 * Person.cpp
 *
 *  Created on: Mar 9, 2019
 *      Author: hsin
 */

#include "Person.h"
#include <iostream>


Person::Person(string defaultName) {
	// intialize name
    name = defaultName;
}

string Person::getName() {
	return name;
}

void Person::setName(string newName) {
	cout << "Name is being set from " + name + " to " + newName << endl;
	name = newName;
}
