//Lab05MyStack.h
//Brandon Endsley
//10/15/18

#pragma once

#include <vector>
using std::vector;

class MyStack
{
public:
	bool isEmpty() const;
	void push(char c);
	char pull();
private:
	vector<char> store;
};