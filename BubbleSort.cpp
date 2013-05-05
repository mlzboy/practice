#include <stdio.h>
#include <algorithm>
int BubbleSort(int *in , int size)
{
  if (size < 2) return 1;
	for(int i=0; i < size; ++i )
	{
		int flag = 0;
		for(int j = i+1; j < size; ++j)
		{
			if(in[i]> in[j])
			{
				std::swap(in[i],in[j]);
				flag=1;
			}
		
		}
		if(!flag)
		{
			return 1;
		}
	}
	return 1;
}

int PrintArr(int *in, int size)
{
	for(int i=0; i < size; ++i)
	{
		printf("%d,",in[i]);
	}
	printf("\n");
}

int main()
{
	{
	int a[]={4,5,6,9,-1,2,3,7};
	BubbleSort(a,sizeof(a)/sizeof(int));
	PrintArr(a,sizeof(a)/sizeof(int));
	}
	{
	int a[]={4};
	BubbleSort(a,sizeof(a)/sizeof(int));
	PrintArr(a,sizeof(a)/sizeof(int));
	}
	return 0;
}
