/*
 * OuputRestrictedDeque.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: bryce14
 */

#include "OutputRestrictedDeque.h"

OutputRestrictedDeque::OutputRestrictedDeque() {
	// TODO Auto-generated constructor stub

}

OutputRestrictedDeque::~OutputRestrictedDeque() {
	// TODO Auto-generated destructor stub
}

void OutputRestrictedDeque::addToLeft(int car) {
	ORDequeList.insertHead(car);
}


void OutputRestrictedDeque::addToRight(int car) {
	ORDequeList.insertTail(car);
}


void OutputRestrictedDeque::removeFromLeft() {
	ORDequeList.remove(ORDequeList.at(0));
}


int OutputRestrictedDeque::showTopLeft() { //returns the id of topleft car, -1 if its empty
	if (ORDequeList.size() > 0) {
			return ORDequeList.at(0);
		}
		else {
			return -1;
		}
}


int OutputRestrictedDeque::showTopRight() { //returns the id of topleft car, -1 if its empty
	if (ORDequeList.size() > 0) {
			return ORDequeList.at(ORDequeList.size() - 1);
		}
		else {
			return -1;
		}
}


int OutputRestrictedDeque::size() { //returns size of deque
	return ORDequeList.size();
}

bool OutputRestrictedDeque::contains(int car) {
	return ORDequeList.findNode(car);
}

