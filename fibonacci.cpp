//this program will get the n'th element of fibonacci series
//___in less time complexity

#include <iostream>
using namespace std;

int fibArray[10];
//needs to be defined as n gets larger
int fib(int n)
{
    if (n<=1)
    {
        fibArray[n]=n;
        return n;
        //if n is 0/1 then the 0th or 1st index of the array will be stored as 0 or 1 respcetively.
    }
    else
    {
        if(fibArray[n-1]==-1)
        {
            fibArray[n-1]=fib(n-1);
            
        }
   if(fibArray[n-2]==-1)
    {
        fibArray[n-2]=fib(n-2);
    }
        return fibArray[n-2]+fibArray[n-1];
    };
        }
   
int main()
{
    int i;//needed to initialize the array as -1
    for (i=0;i<10;i++)
        fibArray[i]=-1;
    cout<<fib(10)<<endl;
    return 0;
}
