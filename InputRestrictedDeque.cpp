/*
 * InputRestrictedDeque.cpp
 *
 *  Created on: Feb 23, 2015
 *      Author: bryce14
 */

#include "InputRestrictedDeque.h"

InputRestrictedDeque::InputRestrictedDeque() {
	// TODO Auto-generated constructor stub

}

InputRestrictedDeque::~InputRestrictedDeque() {
	// TODO Auto-generated destructor stub
}

void InputRestrictedDeque::addToLeft(int car) {
	IRDequeList.insertHead(car);
}

void InputRestrictedDeque::removeFromLeft() {
	IRDequeList.remove(IRDequeList.at(0));
}


void InputRestrictedDeque::removeFromRight() {
	IRDequeList.remove(IRDequeList.at(IRDequeList.size() - 1));
}


int InputRestrictedDeque::showTopLeft() { //returns the id of topleft car, -1 if its empty
	if (IRDequeList.size() > 0) {
			return IRDequeList.at(0);
		}
		else {
			return -1;
		}
}


int InputRestrictedDeque::showTopRight() { //returns the id of topleft car, -1 if its empty
	if (IRDequeList.size() > 0) {
			return IRDequeList.at(IRDequeList.size() - 1);
		}
		else {
			return -1;
		}
}


int InputRestrictedDeque::size() { //returns size of deque
	return IRDequeList.size();
}

bool InputRestrictedDeque::contains(int car) {
	return IRDequeList.findNode(car);
}
