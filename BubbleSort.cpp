/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int recur(int x)
{
    if(x==0)
    {
    return 1;
    }
    
    // cout<<x<<endl;
    int smaller=recur(x-1); 
 return   x*smaller;
}

int iteration (int x)

{
    int y=x-1;
    
    while(y!=0)
    {
        x=x*y;
        y--;
    }
    
    return x;
}

    int a=0;
   int b=1;
 int iterate;

int fib(int x)
{
  
    
    if(x==0)
    {
        return 0;
    }
    if(x==1)
    {
        return 1;
    }
    if(x>1)
    {
       iterate=a+b;
    cout<<iterate;
    a=b;
    b=iterate;
 fib(x-1);   
    }
    
  
    return iterate;
}

// int fib(int x)
// {
  
// int a=0;
// int b=1;
// int iterate;
// for(int i=0;i<5;i++)
// {
//      iterate= a+b;
//     a=b;
//     b=iterate;
//     cout<<iterate<<endl;
// }

// return iterate;
// }


int count=0;

int sairs(int src,int dest)
{
    // if(src==dest)
    // {
    //     return 
        
    // }
    
     if (src==dest)
    {
        //return count;
        return 0;
    }
    src++;
    sairs(src,dest);
    count+2;
    return count;
}



int main()
{
    // cout<<recur(5);
    //cout<<iteration(5);
   
    // cout<<fib(5);

// cout<<sairs(0,10);

int x=412;
int y;
for(int i=0;i<3;i++)
{
    y=x%10;
    cout<<y;
    x=x/10;
    
    
}

    cout<<"Hello World";

    return 0;
}
