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

int factors(int n, int ret[])
{
    int j = 0;
	for (int i = 2; i < n; i = i++)
	{
		while (n%i == 0)
		{
			if isprime(i)
			{
				printf("%d ", i);
				ret[j] = i;
		    		j++;
				n = n/i;
			}
			if isprime(n)
			{
				ret[j] = n;
			}
		}
	}
    return j + 1;
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

int mode(int z[], int c) 
{
    int countArray[c]; 
    int modeCount = 0; 
    int modeNumber; 
    int i = 0; 
    int j = 0;

    for(i=0; i < c; i++)
    {
        countArray[i] = 0;
    }

    for(i=0; i < c; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (z[i] == z[j])
                countArray[i]++;
        }
    }

    for (i=0; i < c; i++)
    {
        if (countArray[i] > modeCount)
        {
            modeCount = countArray[i];
            modeNumber = z[i];
        }   
    }
    if (modeCount > 1)
        return modeNumber;
}
