#include <iostream>
#include "Cat.h"
using namespace std;

//constructor
Cat::Cat(){
	cout << "cat created" << endl;
	happy = true;
}

//destructor
Cat::~Cat(){
	cout << "cat destroyed" << endl;

}

void Cat::speak(){
	if(happy){
		cout << "Memow." << endl;
	} else {
		cout << "ssss-." << endl;
	}

}

void Cat::jump(){
	cout << "Jump!" << endl;
}

void Cat::makeHappy(){
	happy = true;
}





