#include <stdio.h>
#include <math.h>

float average(int x[], int c)
{
    int k = 0;
    for (int i = 0; i < c; i++)
    {
        k += x[i];
    }
    return k/c;
}

int max(int x[], int c) 
{
    int maximum = x[0];
    for (int i = 0; i < c; i++)
    {
        maximum = maximum > x[i] ? maximum : x[i];
    }
    return maximum;
}

int min(int x[], int c) 
{
    int minimum = x[0];
    for (int i = 0; i < c; i++)
    {
        minimum = minimum < x[i] ? minimum : x[i];
    }
    return minimum;
}

int mode(int z[], int l)
{
   int n = max(z, l);
   int p = min(z, l);
   int count[100],  d=-1;
   for(int i = p; i <= n ; i++)
   {
        int c = 0;
        for ( int j=0; j<length; j++)
        {
            if(a[j]==i)
        {
            c++;
        }
        }       
     counts[++d] = c;
    }
    int b = 0,f = 0 ;
    for (int i=0 ; i<=d ; i++)
    {
        if ( counts[i] > b )
        {
            b = counts[i];
            f = i + p;
        }  
   }
   return f;
}


int isprime(int n)
{
    for (int i = 2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int factors(int n, int arr[])
{
    int count=0;
    for( int i = 2; i < n; i++)
    {
        while(n % i == 0)
        {
            if(isprime(i))
            {
                arr[count] = i;
                n = n/i; 
                count++;
            }
            if (isprime(x))
            {
                arr[count] = x;
            }
       }
    }
    return count+1;
}
