#include<iostream>
using namespace std;
void linearSearch(int x,int n,int a[])
{

int Count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x){
            Count++;
            if(Count>0){
        cout<<"number found in the array"<<endl;
    }else{
    cout<<x<<" dosent belong in the array"<<endl;}
        }
    }


}
int main()
{
    int a[]={50,60,44,222,15,24,63,57,59,88};
    linearSearch(63,10,a);

    return 0;
}

