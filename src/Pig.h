/*
 * Pig.h
 *
 *  Created on: Mar 17, 2019
 *      Author: hsin
 */

#ifndef PIG_H_
#define PIG_H_

#include <iostream>
//specify the namespace you want to use
//if have classes with the same name you can distingush them by using namespace

using namespace std;

namespace hh {

const string PIGNAME = "Piggy";
class Pig {
public:
	Pig();
	void speak();
};

}
#endif /* PIG_H_ */
