#include <stdio.h>
#include <assert.h>
#include <math.h>

int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);

int main(void) 
{
    int x[] = {9,5,6,10,2,-3,4};
    assert (max(x, 7) == 10);
    assert (min(x, 7) == -3);
    assert ((average(x, 7) - 4.7142) < 0.001);
    
    int z[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
    assert ((mode(x, 12) == 4));
    
    int ret[100] = {0};
    int count = factors(180, ret);
    assert (count == sizeof(ret[])/sizeof(ret[0]));
    assert (ret[0] == 2);
    assert (ret[1] == 2);
    assert (ret[2] == 3);
    assert (ret[3] == 3);
    assert (ret[4] == 5);

    int y[] = {5};
    assert (max(y, 1) == 5);
    assert (min(y, 1) == 5);
    assert (average(y, 1) == 5.0);
    assert (mode(y, 1) == 5);
    count = factors(143, ret);
    assert (count == sizeof(ret[])/sizeof(ret[0]);
    assert (ret[0] == 11);
    assert (ret[1] == 13);
    printf("Max: passed\n");
    printf("Min: passed\n");
    printf("Average: passed\n");
    printf("Mode: passed\n");
    printf("Factors: passed\n");
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
		ret[j] = 2;
		j++;
		n = n/2;
	}
	
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		while (n%i == 0)
		{
			printf("%d ", i);
			ret[j] = i;
		    	j++;
			n = n/i;
		}
	}
    return ret;
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
