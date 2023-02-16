#pragma once
#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Stack
{
private :
	queue<T> queue1, queue2;
	T top = 0;
	int length;

public:
	Stack();
	void isEmpty();
	void clear();
	void push(T item);
	void pop();
	T getTop();
	void print();

};

