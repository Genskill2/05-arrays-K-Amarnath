#include <stdio.h>
#include <assert.h>


float average(int [], int);

int main(void) 
{
    int x[] = {9,5,6,10,2,-3,4};
    assert ((average(x, 7) - 4.7142) < 0.001);

    int y[] = {5};
    assert (average(y, 1) == 5.0);
    int c = sizeof(x)/sizeof(x[0]);
    printf("Average: passed\n");
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
