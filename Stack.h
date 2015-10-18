/*
 * Stack.h
 *
 *  Created on: Feb 23, 2015
 *      Author: bryce14
 */

#ifndef STACK_H_
#define STACK_H_

#include "LinkedList.h"

class Stack {
public:
	Stack();
	virtual ~Stack();
	void push(int car);
	void pop();
	int top();//returns the ID of the first car in the stack, returns -1 if stack is empty
	int size();//returns the number of cars in the stack
	bool contains(int car);//returns true if found(car is found), false if not found (car doesnt exist)

private:
	LinkedList<int> stackList;
};

#endif /* STACK_H_ */

