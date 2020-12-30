#include<stdio.h>

//The code for checking for prime number

int prime (int a)
    {   int s=0;
        for (int i=2; i<=(a/2); i++)
        {if (a%i == 0)
            {s=1;}
         else
            {s=0;}
        }
     return s;
int prime (int n, int a);
//Recursion Function
int prime(int n, int a)
{   if (a == 1)
    {return 1;}
    else
    {   if (n % a == 0)
       {return 0;}
       else
       {return prime(n, a - 1);}
    }
}

int main()
{   int n;
    int s=0;
    int m;
    printf("Enter the number: ");
    scanf("%d",&n);
    s = prime(n);
    if (s==0)
    m = prime(n,n/2);
    if (m==1)
        {printf("%d is a Prime Number.",n);}
    else
        {printf("%d is not a Prime Number.",n);}
