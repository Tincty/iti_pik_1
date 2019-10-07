#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, f;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a>b && a>c && b>c)
    {
        printf("%d", b);
    }
    else if (b>a && a>c && b>c)
    {
        printf("%d", a);
    }
    else if (c>a && a>b && c>b)
{
        printf("%d", a);
    }
    else if(c>b && b>a && c>a)
    {
        printf("%d", b);
    }
   else if (a>c && b<c && c-a==b-c)
    {
        printf("The num");
    }
    else if (a<c && b>c && c-a==b-c)
    {
        printf("The num");
    }
    else if (a==b)
    {
        printf("The num");
    }
    return 0;
}
