#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n, numbers;
    float avg, sum;
    sum = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &numbers);
        sum = sum + numbers;
    }
    avg = sum / n;
    printf("Sum = %f\n", sum);
    printf("Avg = %.2f", avg);
  return 0;
}
