/*
 * Cat.h
 *
 *  Created on: Mar 3, 2019
 *      Author: hsin
 */

#ifndef CAT_H_
#define CAT_H_


class Cat {

private:
	bool happy = false;
public: // public for the methods accessible outside of the class
	void speak();
	void jump();
	void makeHappy();

	//constructor
	Cat();

	//destructor
	~Cat();
};


#endif /* CAT_H_ */
