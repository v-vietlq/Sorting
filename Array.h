#pragma once
#include <iostream>
using namespace std;
class Array
{
private:
	int *a;
	int n;
public:
	void inputArray();
	void printArray();
	int getn();
	int SequentialSearch(int x);
	int BinarrySearch(int x,int left,int right);
	Array();
	~Array();
};

