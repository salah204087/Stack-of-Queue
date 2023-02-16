#include "Stack.h"


template<class T>
Stack<T>::Stack()
{
	top = 0;
	length = 0;
}

template<class T>
void Stack<T>::isEmpty()
{
	return queue1.empty();
}

template<class T>
void Stack<T>::clear()
{
	while (!queue1.empty()) {
		queue1.pop();
	}
	top = 0;
	length = 0;
}

template<class T>
void Stack<T>::push(T item)
{
	queue2.push(item);

	while (!queue1.empty()) {
		queue2.push(queue1.front());
		queue1.pop();
	}
	queue<T> temp;
	temp = queue1;
	queue1 = queue2;
	queue2 = temp;

	length++;
	top = queue1.front();
}

template<class T>
void Stack<T>::pop()
{
	if (queue1.empty())
		cout << "Cannot pop stack is empty" << endl;
	else {
		queue1.pop();
		top = queue1.front();
		length--;
	}
}

template<class T>
T Stack<T>::getTop()
{
	return top;
}

template<class T>
void Stack<T>::print()
{
	if (queue1.empty())
		cout << "The stack is empty!" << endl;
	else {
		cout << "[ ";
		while (!queue1.empty()) {
			cout << queue1.front() << " ";
			queue2.push(queue1.front());
			queue1.pop();
		}
		cout << "]" << endl;
		queue<T> temp;
		temp = queue1;
		queue1 = queue2;
		queue2 = temp;
	}
}
