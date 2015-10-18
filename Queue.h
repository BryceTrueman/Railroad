/*
 * Queue.h
 *
 *  Created on: Feb 23, 2015
 *      Author: bryce14
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "LinkedList.h"

class Queue {
public:
	Queue();
	virtual ~Queue();

	void push(int car);
	void pop();
	int front();//returns id of first car in queue, or -1 if queue is empty
	int size();//returns size of queue
	bool contains(int car);
private:
	LinkedList<int> queueList;
};

#endif /* QUEUE_H_ */


