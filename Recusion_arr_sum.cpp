
#include <iostream>

using namespace std;
int recursion_sum(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    
    return (recursion_sum(arr,size-1)+arr[size-1]);
}



int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    int sum= recursion_sum(arr,size);
    cout<<sum;

    return 0;
}


//  binary search 

int recursion_binary(int arr[],int size,int start,int end,int key)
{
    int mid=start+end/2;
    if(size==0)
    {
        return 0;
    }
    if(arr[mid]==key)
    {
        //  return index
        return mid;
    }
    else if(arr[mid]<key)
    {
      return recursion_binary(arr,size-1,start+1,end,key);
    }
    else {
       return recursion_binary(arr,size-1,start,end-1,key);
    }
    
}


//  main function

    // int arr[5]={1,2,3,4,5};
    // int size=5;
    // int start=0;
    // int end=4;
    // int key=5;
    // int index= recursion_sum(arr,size,start,end,key);
    // cout<<index;


