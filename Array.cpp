#include "Array.h"



Array::Array()
{
	n = 1;
	a = new int[n];
	a[n] = 0;
}
int Array::getn()
{
	return n;
}

Array::~Array()
{
	delete[]a;
}
void Array::inputArray()
{
	cout << "enter of n: "; cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void Array::printArray()
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
}
int Array::SequentialSearch(int x)
{
	a = new int[n + 1];
	a[n] = x;
	int i = 0;
	while (x != a[i])
		i++;
	if (i < n) return i;
	return -1;
}
int Array::BinarrySearch(int x,int left,int right)
{
	int mid = (left + right) / 2;
	if (x == a[mid]) return mid;
	if (x > a[mid])
		return BinarrySearch(x, mid + 1, right);
	else
		return BinarrySearch(x, left, mid - 1);
	return -1;
}