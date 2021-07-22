/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 0;
    int i,j;
    int ch=1;
    printf("Enter no of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%02d ",ch++);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%02d ",ch++);
        }
        printf("\n");
    }
    return 0;
}
