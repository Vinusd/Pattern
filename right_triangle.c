#include <stdio.h>

int main()
{
    int n = 0;
    int i,j;
    int ch=1;
    printf("Enter no of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
