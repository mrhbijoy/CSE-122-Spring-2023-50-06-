#include<iostream>
using namespace std;

int main()
{
    int n=3;
   
    int arr[n];
    int output[n * 2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  
    for(int i=0;i<n;i++)
    {
        output[i] = arr[i];
        output[i+n] = arr[i];
    }
    for(int i=0;i<n*2;i++)
    {
        cout<<output[i]<<" ";
    }
}
/*
Solution approach:
1. Take input from user
2. Store the input in an array
3. Copy the array to the output array
4. Print the output array

*/