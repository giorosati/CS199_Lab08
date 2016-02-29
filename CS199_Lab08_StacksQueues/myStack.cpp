/*********************************************************************
** Program Filename: myStack.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-28
** Description: myStack class implementation file CS199_400 Lab 8
*********************************************************************/


//includes
#include "myStack.hpp"
#include <iostream>

using std::cout;
using std::endl;

myStack::myStack()				//default constructor
{
	intArray[10];
	for (int i = 0; i < 10; i++)
	{
		intArray[i] = NULL;
	}
}

myStack::~myStack()				//deconstructor
{}

int myStack::top()			//return top value
{
	if (intArray[0] != NULL)
	{
		return intArray[0];
	}
	else
	{
		return -1;
	}
}

bool myStack::pop()				//remove the top member
{
	if (intArray[0] != NULL)
	{
		for (int i = 0; i < 9; i++)
		{
			intArray[i] = intArray[i + 1];
			intArray[9] = NULL;
		}
		return true;
	}
	else
	{
		return false;

	}
}

bool myStack::push(int intIn)	//add an int to the stack
{
	if (intArray[9] == NULL)		//check to make sure the array is not full
	{
		for (int i = 9; i > 0; i--)
		{
			intArray[i] = intArray[i - 1];
		}
		intArray[0] = intIn;
		return true;
	}
	else
	{
		return false;
	}
}

void myStack::list()
{
	cout << "Array Contents: " << endl;
	cout << "******************************" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Position " << i << ": " << intArray[i] << endl;
	}
}