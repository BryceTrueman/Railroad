/*
 * Stack.cpp
 *
 *  Created on: Feb 23, 2015
 *      Author: bryce14
 */

#include "Stack.h"

Stack::Stack() {
	// TODO Auto-generated constructor stub

}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}

void Stack::push(int car) {
	stackList.insertHead(car);
}

void Stack::pop() {
	stackList.remove(stackList.at(0));
}

int Stack::top() { //returns the ID of the first car in the stack, returns -1 if stack is empty
	if (stackList.size() > 0) {
		return stackList.at(0);
	}
	else {
		return -1;
	}
}

int Stack::size() { //returns the number of cars in the stack
	return stackList.size();
}

bool Stack::contains(int car) {
	return stackList.findNode(car);
}
