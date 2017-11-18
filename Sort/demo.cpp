#include<iostream>
#include"SortTestHelper.h"
#include"Sort.h"
using namespace std;
int main()
{
	int *p;
	int n = 10000000;
	p=SortTestHelper::generateRandomArray(n, 0, n);
	SortTestHelper::testSort("QuickSort", QuickSort,p,n);
	system("pause");
	return 0;
}