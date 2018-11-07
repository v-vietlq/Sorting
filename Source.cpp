#include "Array.h"
int main()
{
	Array arr;
	arr.inputArray();
	arr.printArray();
	//cout<<arr.SequentialSearch(10);
	cout << arr.BinarrySearch(10, 0, arr.getn() - 1);
	system("pause");
	return 0;
}