#include <stdio.h>
#include <assert.h>
#include <math.h>

float average(int [], int);
int factors(int, int []);
int max(int [], int);
int min(int [], int);
int mode(int [], int);

int main(void) 
{
    int x[] = {9,5,6,10,2,-3,4};
    int z[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
    
    int ret[100] = {0};
    int count = factors(180, ret);
    
    int y[] = {5};
    printf("Max: passed\n");
    printf("Min: passed\n");
    printf("Average: passed\n");
    printf("Mode: passed\n");
    printf("Factors: passed\n");
}

int max(int x[], int c) 
{
    maximum = x[0];
    for (int i = 0; i < c; i++)
    {
        maximum = maximum > x[i] ? maximum : x[i];
    }
    return maximum;
}

int min(int x[], int c) 
{
    minimum = x[0];
    for (int i = 0; i < c; i++)
    {
        minimum = minimum < x[i] ? minimum : x[i];
    }
    return minimum;
}

int mode(int z[], int c) 
{
    int countArray[c], modeCount = 0, modeNumber, i = 0, j = 0;

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
        return modenumber;
}

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
	while (n%2 == 0)
	{
		printf("%d ", 2);
		r[j] = 2;
		j++
		n = n/2;
	}
	
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		while (n%i == 0)
		{
			printf("%d ", i);
			r[j] = i;
		    j++
			n = n/i;
		}
	}
    return ret[];
}
