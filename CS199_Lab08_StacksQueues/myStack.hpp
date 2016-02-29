/*********************************************************************
** Program Filename: myStack.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-28
** Description: myStack class header file CS199_400 Lab 8
*********************************************************************/

#ifndef MYSTACK_HPP
#define MYSTACK_HPP


class myStack
{
protected:

	int intArray[10];

public:
	myStack();				//default constructor
	~myStack();				//deconstructor
	int top();				//return top value
	bool pop();				//remove true if an element was removed, false if not
	bool push(int);			//add an int to the top of the stack, returns true if OK, false if stack is full
	void list();
};
#endif
