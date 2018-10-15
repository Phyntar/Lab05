//Lab05Driver.cpp
//Brandon Endsley
//10/15/18

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <list>
#include "Lab05MyStack.h"

using std::string;
using std::stack;
using std::cout;
using std::vector;
using std::list; 

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);

int main()
{
	
	cout << "'Stack Reversal' reversed: ";
	cout << stringReversal1("Stack Reversal") << "\n\n";

	cout << "'Vector Reversal' reversed: ";
	cout << stringReversal2("Vector Reversal") << "\n\n";

	cout << "'List Reversal' reversed: ";
	cout << stringReversal3("List Reversal") << "\n\n";

	cout << "'MyStack Reversal' reversed: ";
	cout << stringReversal3("MyStack Reversal") << "\n\n";

	system("pause");

	return 0;

}

string stringReversal1(string input)
{
	stack<char> strStack;
	string out;

	for (unsigned int i = 0; i < input.length(); i++)
	{
		strStack.push(input.at(i));

	}
	string temp;

	for (unsigned int i = 0; i < input.length(); i++)
	{
		temp = strStack.top();
		out.append(temp);
		strStack.pop();
	}
	return out;
}

string stringReversal2(string input)
{
	vector<char> strVector;
	string out;

	for (unsigned int i = 0; i < input.length(); i++)
	{
		strVector.push_back(input.at(i));

	}
	string temp;

	for (unsigned int i = 0; i < input.length(); i++)
	{
		temp = strVector.back();
		out.append(temp);
		strVector.pop_back();
	}
	return out;
}

string stringReversal3(string input)
{
	list<char> strList;
	string out;

	for (unsigned int i = 0; i < input.length(); i++)
	{
		strList.push_back(input.at(i));

	}
	string temp;

	for (unsigned int i = 0; i < input.length(); i++)
	{
		temp = strList.back();
		out.append(temp);
		strList.pop_back();
	}
	return out;
}

string stringReversal4(string input)
{
	MyStack strStack;
	string out;

	for (unsigned int i = 0; i < input.length(); i++)
	{
		strStack.push(input.at(i));

	}
	string temp;

	for (unsigned int i = 0; i < input.length(); i++)
	{
		temp = strStack.pull();
		out.append(temp);
	}
	return out;
}