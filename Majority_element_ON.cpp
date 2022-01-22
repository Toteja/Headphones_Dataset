#include<iostream>
using namespace std;
int main()
{
    //Bayer - Moore Majority Vote Algorithm
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    int ele=0;
    int count=0;
    for(int i =0;i<n;i++)
    {
        if(count == 0)
        {
            ele=arr[i];
        }
        if(arr[i] != ele)
        {
            count--;
        }
        else
        {
            count++;
        }
    }
    int count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            count2++;
        }
    }
    if(count2> n/3)
    {
        cout<<ele<<endl;
    }
    else
    {
        cout<<"No majority element "<<endl;
    }
}