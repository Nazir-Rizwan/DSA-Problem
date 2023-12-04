//  Note For Bubble Sort 
//  Bubble sort is not suitable for large dataset 
//  code start 
# include <iostream>
using namespace std;
int main()
{
int arr[5]={6,2,0,7,10};
//  for best time complexity;

bool swaping=false;

for(int i=0; i<5; i++)
for(int j=0; j<5-i-1; j++)
{
    if(arr[j]>arr[j+1])
    {
        swaping=true;
        swap(arr[j],arr[j+1]);
    }
}

for(int j=0; j<5; j++)
{
    cout<<arr[j]<<"\t";
}
return 0;
}