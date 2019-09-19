#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Change(int *arr, int len)
{
	int *i = arr;
	int *j= arr+len - 1;
	int tmp = 0;
	while (i < j)
	{
		while ((i < j) && (*i) % 2 != 0)
		{
			i++;
		}
		while ((i < j) && (*j) % 2 == 0)
		{
			j--;
		}
		if (i < j)
		{
			tmp = (*i);
			(*i) = (*j);
			(*j) = tmp;
		}

	}
}

void Printf(int *arr,int len)
{
	int i = 0;
	for (i=0; i < len;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Change(arr,len);
	Printf(arr,len);
	return 0;
}