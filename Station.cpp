/*
 * Station.cpp
 *
 *  Created on: Feb 23, 2015
 *      Author: bryce14
 */

#include "Station.h"

Station::Station() {
	// TODO Auto-generated constructor stub
	current_car = -1;
}

Station::~Station() {
	// TODO Auto-generated destructor stub
}

bool Station::addToStation(int car) {
	if (stackList.contains(car) == true || queueList.contains(car) == true
			|| dequeList.contains(car) == true || IRDequeList.contains(car) == true || ORDequeList.contains(car) == true) {
		return false;
	} else if (current_car == -1) {
		if (car >= 0) {
			current_car = car;
			//cout << "There is a car being added to station right now with the value of: " << car << endl;
			return true;
		}
	}
	return false;
}

int Station::showCurrentCar() {
	if (current_car == -1) {
		return -1;
	} else {
		return current_car;
	}
}

bool Station::removeFromStation() {
	//cout << "this is the current car being removed from station: " << current_car << endl;
	if (current_car != -1) {
		current_car = -1;
		return true;
	}
	return false;
}

bool Station::addToStack() {
	if (current_car == -1) {
		return false;
	} else {
		if (stackList.size() < 5) {
			//cout << "There is a car being put onto the stack with an id of: " << current_car << endl;
			stackList.push(current_car);
			current_car = -1;
			return true;
		}
	}
	return false;
}

bool Station::removeFromStack() {
	if (current_car != -1) {
		return false;
	} else if (stackList.size() == 0) {
		return false;
	} else {
		//cout << "This car is being removed from the stack and put onto current car: " << current_car << endl;
		current_car == stackList.top();
		stackList.pop();
		return true;
	}
}

int Station::showTopOfStack() {
	if (stackList.size() == 0) {
		return -1;
	} else {
		return stackList.top();
	}
}

int Station::showSizeOfStack() {
	return stackList.size();
}

bool Station::addToQueue() {
	if (current_car == -1) {
		return false;
	} else {
		if (queueList.size() < 5) {
			//cout << "There is a car being put onto the queue with an id of: " << current_car << endl;
			queueList.push(current_car);
			current_car = -1;
			return true;
		}
	}
	return false;
}

bool Station::removeFromQueue() {
	if (current_car != -1) {
		return false;
	} else if (queueList.size() == 0) {
		return false;
	} else {
		current_car == queueList.front();
		queueList.pop();
		return true;
	}
}

int Station::showTopOfQueue() {
	if (queueList.size() == 0) {
		return -1;
	} else {
		return queueList.front();
	}
}

int Station::showSizeOfQueue() {
	return queueList.size();
}

bool Station::addToDequeLeft() {
	if (current_car == -1) {
		return false;
	} else {
		if (dequeList.size() < 5) {
			//cout << "There is a car being put onto the deque left with an id of: " << current_car << endl;
			dequeList.addToLeft(current_car);
			current_car = -1;
			return true;
		}
	}
	return false;
}

bool Station::addToDequeRight() {
	if (current_car == -1) {
		return false;
	} else {
		if (dequeList.size() < 5) {
			//cout << "There is a car being put onto the deque left with an id of: " << current_car << endl;
			dequeList.addToRight(current_car);
			current_car = -1;
			return true;
		}
	}
	return false;
}

bool Station::removeFromDequeLeft() {
	if (current_car != -1) {
		return false;
	} else if (dequeList.size() == 0) {
		return false;
	} else {
		current_car == dequeList.showTopLeft();
		dequeList.removeFromLeft();
		return true;
	}
}

bool Station::removeFromDequeRight() {
	if (current_car != -1) {
		return false;
	} else if (dequeList.size() == 0) {
		return false;
	} else {
		current_car == dequeList.showTopRight();
		dequeList.removeFromRight();
		return true;
	}
}

int Station::showTopOfDequeLeft() {
	if (dequeList.size() == 0) {
		return -1;
	} else {
		return dequeList.showTopLeft();
	}
}

int Station::showTopOfDequeRight() {
	if (dequeList.size() == 0) {
		return -1;
	} else {
		return dequeList.showTopRight();
	}
}

int Station::showSizeOfDeque() {
	return dequeList.size();
}
//---------------------------------------------------------
bool Station::addToIRDequeLeft() {
	if (current_car == -1) {
		return false;
	} else {
		if (IRDequeList.size() < 5) {
			//cout << "There is a car being put onto the deque left with an id of: " << current_car << endl;
			IRDequeList.addToLeft(current_car);
			current_car = -1;
			return true;
		}
	}
	return false;
}

bool Station::removeFromIRDequeLeft() {
	if (current_car != -1) {
		return false;
	} else if (IRDequeList.size() == 0) {
		return false;
	} else {
		current_car == IRDequeList.showTopLeft();
		IRDequeList.removeFromLeft();
		return true;
	}
}

bool Station::removeFromIRDequeRight() {
	if (current_car != -1) {
		return false;
	} else if (IRDequeList.size() == 0) {
		return false;
	} else {
		current_car == IRDequeList.showTopRight();
		IRDequeList.removeFromRight();
		return true;
	}
}

int Station::showTopOfIRDequeLeft() {
	if (IRDequeList.size() == 0) {
		return -1;
	} else {
		return IRDequeList.showTopLeft();
	}
}

int Station::showTopOfIRDequeRight() {
	if (IRDequeList.size() == 0) {
		return -1;
	} else {
		return IRDequeList.showTopRight();
	}
}

int Station::showSizeOfIRDeque() {
	return IRDequeList.size();
}
// -------------------------------------------------------
bool Station::addToORDequeLeft() {
	if (current_car == -1) {
		return false;
	} else {
		if (ORDequeList.size() < 5) {
			//cout << "There is a car being put onto the deque left with an id of: " << current_car << endl;
			ORDequeList.addToLeft(current_car);
			current_car = -1;
			return true;
		}
	}
	return false;
}

bool Station::addToORDequeRight() {
	if (current_car == -1) {
		return false;
	} else {
		if (ORDequeList.size() < 5) {
			//cout << "There is a car being put onto the deque left with an id of: " << current_car << endl;
			ORDequeList.addToRight(current_car);
			current_car = -1;
			return true;
		}
	}
	return false;
}

bool Station::removeFromORDequeLeft() {
	if (current_car != -1) {
			return false;
		} else if (ORDequeList.size() == 0) {
			return false;
		} else {
			current_car == ORDequeList.showTopLeft();
			ORDequeList.removeFromLeft();
			return true;
		}
}

int Station::showTopOfORDequeLeft() {
	if (ORDequeList.size() == 0) {
		return -1;
	} else {
		return ORDequeList.showTopLeft();
	}
}

int Station::showTopOfORDequeRight() {
	if (ORDequeList.size() == 0) {
		return -1;
	} else {
		return ORDequeList.showTopRight();
	}
}

int Station::showSizeOfORDeque() {
	return ORDequeList.size();
}

