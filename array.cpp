#include<iostream>
using namespace std;

int main(){

    int n,i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
	cout<<"array output"<<endl;
    cout<<"array elements are"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }



}
