#include <stdio.h>
int main()
{
	int number[] = {10,20,30,40,50};
	int total = 0;
	int count = 5;
	double average;
	 for(int i=0; i < count; i++)
	 {
	 	total = total + number[i];
	 }
	  average = (double) total / count;

    printf("Numbers: [");
    for (int i = 0; i < count; i++)
    {
        printf("%d", number[i]);

        if (i < count - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Sum: %d\n", total);
    printf("Average: %.1f\n", average);

    return 0;
}