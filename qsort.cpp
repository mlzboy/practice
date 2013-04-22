#include <iostream>

int partition(int *in ,int low,int high)
{
    if (low>=high) return -1;
    int pos = low +(high-low)/2;
    int _low = low;
    int _high = high;
    while(_low < _high)
    {
 
 //       std::cout << _low;
        if((_low < pos) && in[_low] > in[pos])
        {
            //int tmp=in[_low];
            //in[_low]=in[pos];
            //in[pos]=tmp;
            std::swap(in[_low],in[pos]);
            _low = low;
            continue;
        }

        if((_low > pos) && in[_low] < in[pos])
        {
            //int tmp=in[_low];
            //in[_low]=in[pos];
            //in[pos]=tmp;
            std::swap(in[_low],in[pos]);
            _low = low;
            continue;
        }
        _low++;
    }
    return pos;

}

void qsort(int *in ,int low,int high)
{
    if(low>=high) return ;
    int pos = partition(in,low,high);
    qsort(in,low,pos-1);
    qsort(in,pos+1,high);
}


int main(void)
{
    int a[] = {3,1,4,7,-1,2};
    qsort(a,0,5);
    for(int i=0;i<6;++i)
    {
        std::cout << a[i] << ' ';
    }
    return 0;
}
