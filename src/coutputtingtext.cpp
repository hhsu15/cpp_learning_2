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
void changeInt(int *ptr_num); //pointer
void charArray();

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

	Person person("Hsin");
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

    //memory location of an object - will be same as "this"
    cout << "Memory location of the object: " << &person << endl;

    //another person object using the short hand
    stringstream ss2;
    Person person2("Jess", 30);
    ss2 << "person2's name is ";
    ss2 << person2.getName();
    ss2 << " and age is ";
    ss2 << person2.getAge();
    string person2_info = ss2.str();
    cout << person2_info << endl;

    //------pointer------
    int myNum = 10;
    cout << "Before value: "<< myNum << endl;
    changeInt(&myNum);
    cout << "After value: "<< myNum << endl;

    //array pointer
    string names[] = {"Hsin", "Kyle", "Jess"};
    cout << names << endl; //this gives you the pointer
    string *pnames = names;
    pnames ++;
    cout << *pnames << endl; //this will print kyle

    //use pointer to loop thru the array
    string *ptname = &names[0];
    string *ptendname = &names[2];

    while (true) {
    	cout << "element: " << *ptname << endl;
    	if (ptname == ptendname) {
    		break;
    	}
    	ptname++;
    }

    // pointer arithmetic
    string *pstartname = &names[0];
    string *pendname = &names[3];
    int lenOfNames = pendname - pstartname;
    cout << lenOfNames << endl; // print out 3

    charArray();
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

void changeInt(int *ptr_num) {
	// dereference
	cout << "pointer:" << ptr_num << endl;
	cout << "value stored in the pointer:" << *ptr_num << endl;
	*ptr_num = 40;
}

void charArray() {
	char text[] = "hi";
	cout << text << endl; //will print hi

	//loop thur chars
	for (int i=0; i<sizeof(text); i++) {
    	cout << i << ": " << text[i] << endl;
	}

	// loop thru char array and stop at the end of array
	int k = 0;
	while (true) {
		// break when the element value is 0
		if (text[k] == 0) {
			break;
		}
		cout << text[k] << endl;
		k++;
	}

	// does the same thing
	string text2 = "hello";
	for (int i=0; i<5; i++) {
		cout << text2[i] << endl;
	}
}
