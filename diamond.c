/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 0;
    int i,j,k;
    printf("Enter no of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(i=n-1;i>=1;i--){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
