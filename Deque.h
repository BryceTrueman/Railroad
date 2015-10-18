/*
 * Deque.h
 *
 *  Created on: Feb 23, 2015
 *      Author: bryce14
 */

#ifndef DEQUE_H_
#define DEQUE_H_

#include "LinkedList.h"

class Deque {
public:
	Deque();
	virtual ~Deque();
	void addToLeft(int car);//return true if added, should be no current car if successful. return false if no current car or deque is full
	void addToRight(int car);//return true if added, should be no current car if successful. return false if no current car or deque is full
	void removeFromLeft();//return true if removed and makes it the current car, returns false if there is already current or empty
	void removeFromRight();//return true if removed and makes it the current car, returns false if there is already current or empty
	int showTopLeft();//returns the id of topleft car, -1 if its empty
	int showTopRight();//returns the id of topleft car, -1 if its empty
	int size();//returns size of deque
	bool contains(int car);
private:
LinkedList<int> dequeList;

};

#endif /* DEQUE_H_ */


