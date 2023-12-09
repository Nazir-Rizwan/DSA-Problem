
#include <iostream>

using namespace std;


//  Approach 1 but skip right array if not found peek element 
int  mountain(int arr[])
{
  int start=0;
  int end=3;
  while(start<end)
  {
      int mid=(start+end)/2;
      if(arr[mid]<arr[mid+1])
      {
          start=mid+1;
    
      }
      else{
          end=mid;
      }
      
  }
  return start;
}






// For Approach 2  check element increaseing and decrease int 
//  Binary Search counter 2 element find peek 
int  mountain(int arr[])
{
  int start=0;
  int end=3;
  while(start<=end)
  {
      int mid=(start+end)/2;
      if(arr[mid]<arr[mid+1])
      {
          start=mid+1;
    
      }
      else{
          end=mid-1;
      }
      
  }
  return start;
}


int main()
{
   int arr[4]={0,2,1,0};
   
  cout<<mountain(arr);

    return 0;
}
