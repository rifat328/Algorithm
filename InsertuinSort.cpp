#include<iostream>
using namespace std;
void SelectionSort(int a[],int n)
{
    for(int i =0;i<n-1;i++){
        int item = a[i];
       int j=i-1;
       while (j>=0&&a[j] > item){
        a[j+1]=a[j];
        j=j-1;
       }
       a[j+1]=item;
    }

}
int main()
{
    int a[]={50,60,44,222,15,24,63,57,59,88};
    SelectionSort(a,10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
