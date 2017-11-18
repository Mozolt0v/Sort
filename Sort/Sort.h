#ifndef SORT_H
#define	SORT_H


template<typename T>
int __partition(T *p, int l, int r)
{

	T e = p[l];
	int i = l;
	for (int  j = l + 1; j <= r; j++)
	{
		if (p[j] < e)
		{	
			swap(p[j], p[i + 1]);
			i++;
		}
	}
	swap(p[l], p[i]);
	return i;
}

template<typename T>
void __QuickSort(T *p, int l, int r)
{
	if (l >= r)
	{
		return;
	}
	int q = __partition(p, l, r);
	__QuickSort(p, l, q - 1);
	__QuickSort(p, q + 1, r);
}

template<typename T>
void QuickSort(T *p, int n)
{
	__QuickSort(p, 0, n-1);
}




#endif // !SORT_H

