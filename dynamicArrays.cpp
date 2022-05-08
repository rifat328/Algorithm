#include<iostream>
using namespace std;
int main()
{
    int Count;
    cout<<"how many number you want to store ?"<<endl;
    cin>>Count;
  int *pointerForDynamicArray;
    pointerForDynamicArray=new int(Count);

    for(int i=0;i<Count;i++){
        cout<<"Enter "<<i+1<<" number"<<endl;
    cin>>pointerForDynamicArray[i];
    }

    for(int k=0;k<Count;k++){
        cout<<k+1<<"st value was : ";
    cout<<pointerForDynamicArray[k]<<endl;
    }
    delete[] pointerForDynamicArray;

    return 0;
}
