//Lab05MyStack.cpp
//Brandon Endsley
//10/15/18

#include "Lab05MyStack.h"


bool MyStack::isEmpty() const
{
	return store.empty();
}

void MyStack::push(char c)
{
	store.push_back(c);
}

char MyStack::pull()
{
	char temp = store.back();
	store.pop_back();
	return temp;
}