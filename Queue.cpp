/*
 * Queue.cpp
 *
 *  Created on: Feb 23, 2015
 *      Author: bryce14
 */

#include "Queue.h"

Queue::Queue() {
	// TODO Auto-generated constructor stub

}

Queue::~Queue() {
	// TODO Auto-generated destructor stub
}


void Queue::push(int car) {
	queueList.insertTail(car);
}



void Queue::pop() {
	queueList.remove(queueList.at(0));
}



int Queue::front() { //returns id of first car in queue, or -1 if queue is empty
	if (queueList.size() > 0) {
		return queueList.at(0);
	}
	else {
		return -1;
	}
}



int Queue::size() { //returns size of queue
	return queueList.size();
}

bool Queue::contains(int car) {
	return queueList.findNode(car);
}
