#include <stdio.h>
int bsearch(int *in, int low , int high , int key)
{
  if(low >= high) return -1;

	int pos = low + (high - low)/2;
	
	if(in[pos] == key)
	{
		return pos;
	}

	if(in[pos] < key)
	{
		return bsearch(in , pos+1 , high , key);
	}

	if(in[pos] > key)
	{
		return bsearch(in , low , pos-1 , key);
	}
}

int main(void)
{
	int a[] = {1,2,3,4,5,6};
	
	int ret = bsearch(a,0,5,5);

	printf("%d\n",ret);

	return 0;

}
