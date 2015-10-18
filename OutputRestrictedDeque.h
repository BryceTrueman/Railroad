/*
 * OutputRestrictedDeque.h
 *
 *  Created on: Feb 26, 2015
 *      Author: bryce14
 */

#ifndef OUTPUTRESTRICTEDDEQUE_H_
#define OUTPUTRESTRICTEDDEQUE_H_

#include "LinkedList.h"

class OutputRestrictedDeque {
public:
	OutputRestrictedDeque();
	virtual ~OutputRestrictedDeque();
	void addToRight(int car);//return true if added, should be no current car if successful. return false if no current car or deque is full
	void addToLeft(int car);//return true if added, should be no current car if successful. return false if no current car or deque is full
	void removeFromLeft();//return true if removed and makes it the current car, returns false if there is already current or empty
	int showTopLeft();//returns the id of topleft car, -1 if its empty
	int showTopRight();//returns the id of topleft car, -1 if its empty
	int size();//returns size of deque
	bool contains(int car);


private:
	LinkedList<int> ORDequeList;
};

#endif /* OUTPUTRESTRICTEDDEQUE_H_ */

