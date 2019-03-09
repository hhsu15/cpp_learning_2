//============================================================================
// Name        : coutputtingtext.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream> // use this to build string format
#include <limits>
#include <string>
#include <iomanip> // you can use fixed etc
#include "utils.h"
#include "Cat.h"
#include "Dog.h"
#include "Person.h"
using namespace std;

//prototype
string sayHello();
string switch_ex(int val);


int main() {
	/*
	 get user input
	 string input;
	 cout << "enter your name: " << flush;
	 cin >> input; // >> is called extractor operator
	 cout << "Hello " + input << endl;
	 cout << INT_MAX << endl;
	*/
	long int value = 3434323443434343;
	cout << value << endl;
	cout << sizeof(int) << endl;

	float fvalue = 77.8;
	cout << setprecision(20) << fixed << fvalue << endl;

	double dvalue = 77.8;
	cout << setprecision(20) << fixed << dvalue << endl;

	cout << sayHello() << endl;
	loop();
	cout << switch_ex(10) << endl;

	// use curly bracket the object only exits in the scope
	// object is destroyed after the scope
	{
		Cat cat; // instantiate cat object
		cat.makeHappy();
		cat.speak();
		cat.jump();
	}

	Person person;
	person.setName("John");
	cout << "The name is " << person.getName() << endl;

    cout << "ending program" << endl;

    //stringstream from <sstream>
    // we can use this to turn things into a single string
    stringstream ss;
    int age = 38;
    float height = 10.9;

    ss << "My name is ";
    ss << person.getName();
    ss << " and my age is ";
    ss << age;
    ss << " and height is ";
    ss << height;
    string info = ss.str(); //use the .str() method to get string
    cout << info << endl;

	return 0;
}

string sayHello(){
	//cout << "Hello world!" << endl;
	return "Hello world";
}

void loop() {
	//array
	int count = 10;
	do {
		cout << count << endl;
		count--;
	} while (count >= 0);

	int intArray[3];
	intArray[0] = 1000;
	cout << intArray[1] << endl;

	double dArray[] = {12.0, 23.6, 11.6, 22.9};
	int len = sizeof(dArray)/sizeof(double); //get length of array
	for (int i=0; i<len; i++){
		cout << dArray[i] << endl;
	}
}

void multiArray(){
	//multi-dimentional
	string table[2][3] = {
			{"shin", "jess", "kyle"},
			{"ben", "sha", "eve"}
	};

	for (int i=0; i<2; i++){
		for (int j=0; j<3; j++){
			cout << "name in the table:" << table[i][j] << endl;
		}
	};
}

string switch_ex(int val){
	//switch
	/*
	int val;
	cout << "Input a number: " << flush;
	cin >> val;
	*/
	switch(val){
	case 4:
		return "wrong value. Not 4";
		break;
	case 9:
		return "close but not 9";
		break;
	case 10:
		return "yes, you got it right";
		break;
	default:
        return "NO";

	}
}
