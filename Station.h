/*
 * Station.h
 *
 *  Created on: Feb 23, 2015
 *      Author: bryce14
 */

#ifndef STATION_H_
#define STATION_H_

#include "StationInterfaceExtra.h"
#include "LinkedList.h"
#include "Stack.h"
#include "Deque.h"
#include "Queue.h"
#include "InputRestrictedDeque.h"
#include "OutputRestrictedDeque.h"

class Station: public StationInterfaceExtra {
public:
	Station();
	virtual ~Station();

	bool addToStation(int car);
	int showCurrentCar();
	bool removeFromStation();

	bool addToQueue();
	bool removeFromQueue();
	int showTopOfQueue();
	int showSizeOfQueue();

	bool addToStack();
	bool removeFromStack();
	int showTopOfStack();
	int showSizeOfStack();

	bool addToDequeLeft();
	bool addToDequeRight();
	bool removeFromDequeLeft();
	bool removeFromDequeRight();
	int showTopOfDequeLeft();
	int showTopOfDequeRight();
	int showSizeOfDeque();

	bool addToIRDequeLeft();
	bool removeFromIRDequeLeft();
	bool removeFromIRDequeRight();
	int showTopOfIRDequeLeft();
	int showTopOfIRDequeRight();
	int showSizeOfIRDeque();

	bool addToORDequeLeft();
	bool addToORDequeRight();
	bool removeFromORDequeLeft();
	int showTopOfORDequeLeft();
	int showTopOfORDequeRight();
	int showSizeOfORDeque();

private:
	Stack stackList;
	Queue queueList;
	Deque dequeList;
	InputRestrictedDeque IRDequeList;
	OutputRestrictedDeque ORDequeList;
	int current_car;
};

#endif /* STATION_H_ */




