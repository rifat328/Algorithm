#include<iostream>
using namespace std;
void SelectionSort(int A[],int n)
{
    for(int i =0;i<n-1;i++)
    {
        int imin =i; //its position :elements from i to n-1 are candidates
        for(int j =i+1;j<n;j++)
        {
            if(A[j]<A[imin])
                imin=j;
        }
        int temp = A[i];
        A[i]=A[imin];
        A[imin]=temp;


    }
}
int main()
{
    int A[]={50,60,44,222,15,24,63,57,59,88};
    SelectionSort(A,10);
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
