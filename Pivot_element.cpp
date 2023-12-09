
#include <iostream>

using namespace std;


//  Approach 1 but skip right array if not found peek element 
int  mountain(int arr[])
{
  int start=0;
  int end=4;
  while(start<end)
  {
      int mid=(start+end)/2;
      if(arr[mid]>=arr[0])
      {
          start=mid+1;
    
      }
      else{
          end=mid;
      }
      
  }
  return start;
}



int main()
{
   int arr[5]={30,40,50,10,20};
   
  cout<<mountain(arr);

    return 0;
}
