/*
 * Deque.cpp
 *
 *  Created on: Feb 23, 2015
 *      Author: bryce14
 */

#include "Deque.h"

Deque::Deque() {
	// TODO Auto-generated constructor stub

}

Deque::~Deque() {
	// TODO Auto-generated destructor stub
}

void Deque::addToLeft(int car) {
	dequeList.insertHead(car);
}


void Deque::addToRight(int car) {
	dequeList.insertTail(car);
}


void Deque::removeFromLeft() {
	dequeList.remove(dequeList.at(0));
}


void Deque::removeFromRight() {
	dequeList.remove(dequeList.at(dequeList.size() - 1));
}


int Deque::showTopLeft() { //returns the id of topleft car, -1 if its empty
	if (dequeList.size() > 0) {
			return dequeList.at(0);
		}
		else {
			return -1;
		}
}


int Deque::showTopRight() { //returns the id of topleft car, -1 if its empty
	if (dequeList.size() > 0) {
			return dequeList.at(dequeList.size() - 1);
		}
		else {
			return -1;
		}
}


int Deque::size() { //returns size of deque
	return dequeList.size();
}

bool Deque::contains(int car) {
	return dequeList.findNode(car);
}

