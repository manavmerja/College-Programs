#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter The Number: ");
    scanf ("%d",&n);


    for(i = 0; i < n; i++)
    {
      for(j = i; j < n - 1; j++)
        {
            printf(" ");
        }
     for(k = 0; k <= i; k++)
        {
            printf("%c", 'A' + k);
        }
     for(k = i - 1; k >= 0; k--) {
            printf("%c", 'A' + k);
        }
            printf("\n");
    }


    return 0;
}
