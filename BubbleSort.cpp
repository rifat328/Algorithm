#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1; j++)
        {
            if (a[j]>a[j+1]){
            int temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;}


        }
    }
}
int main()
{
   int A[]={50,60,44,222,15,24,63,57,59,88};
    bubbleSort(A,10);
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;

}
