/*
 * LinkedList.h
 *
 *  Created on: Feb 5, 2015
 *      Author: bryce14
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdexcept>
#include <iostream>

using namespace std;

template<class T>



class LinkedList {
public:
	LinkedList() :
			head(NULL), count(0) {
	}
	virtual ~LinkedList() {
		clear();
	}

	void insertHead(T value) {
		if (findNode(value) == false) {
			if (head == NULL) {
				Node* node = new Node(value);
				//node->next = head;
				head = node;
				count++;
				return;
			} else {
				Node* newhead = new Node(value);
				newhead->next = head;
				head = newhead;
				count++;
				return;
			}
		} else {
			return;
		}
	}

	void insertTail(T value) {
		if (findNode(value) == false) {
			if (head == NULL) {
				Node* newNode = new Node(value);
				head = newNode;
				count++;
				//head->next = NULL;
				return;
			} else {
				Node* temp = head;
				while (temp->next != NULL) {
					temp = temp->next;
				}
				Node* tailNode = new Node(value);
				temp->next = tailNode;
				tailNode->next = NULL;
				count++;
				return;
			}
		} else {
			return;
		}
	}

	void insertAfter(T value, T insertionNode) {
		if (findNode(insertionNode) == true) {
			if (findNode(value) == false) {
				Node* previous = head;
				Node* currentInsert = head;
				while (currentInsert != NULL) {
					if (currentInsert->value == insertionNode) {
						Node* after_node = new Node(value);
						after_node->next = currentInsert->next;
						currentInsert->next = after_node;
						count++;
						return;
					}
					previous = currentInsert;
					currentInsert = currentInsert->next;
				}
			}
		} else {
			return;
		}
	}

	void remove(T value) {
		Node* temp = head;
		Node* previous = head;
		if (count != 0) {
			if (value == head->value) {
				head = temp->next;
				delete temp;
				count = count - 1;
				return;
			} else {
				while (temp->next != NULL) {
					if (temp->value == value) {
						previous->next = temp->next;
						delete temp;
						count = count - 1;
						return;
					}
					previous = temp;
					temp = temp->next;
				}
				if (temp->next == NULL) {
					if (temp->value == value) {
						previous->next = NULL;
						delete temp;
						count = count - 1;
						return;
					}
				}
			}
		} else {
			return;
		}
	}

	void clear() {
		Node* node_ptr = head;
		while (node_ptr != NULL) {
			Node* trash = node_ptr;
			node_ptr = node_ptr->next;
			delete trash;
			count = 0;
		}
		head = NULL;
		return;
	}

	int size() {
		return count;
	}

	T at(int index) { //Returns the value of the node at the given index.
		Node* temp = head;
		if (index < 0 || index > count - 1) {
			throw out_of_range("This index is out of range");
		} else {
			for (int i = 0; i < index; i++) {
				temp = temp->next;
			}
			return temp->value;
		}
	}

	bool findNode(T value) {
		bool found = false; //false means you didn't find anything, true means you did
		if (head == NULL) {
			return found;
		}
		Node* node_ptr = head;
		while (node_ptr != NULL) {
			if (node_ptr->value == value) {
				found = true;
			}
			node_ptr = node_ptr->next;
		}
		return found;
	}
private:
	struct Node {
		Node(T value) :
				value(value), next(NULL) {
		}
		;
		T value;
		Node* next;
	};
	Node* head;
	Node* tail;
	int count;
};

#endif /* LINKEDLIST_H_ */

