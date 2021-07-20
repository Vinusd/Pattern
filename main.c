/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.https://www.onlinegdb.com/online_c_compiler#debug_window_local_variables
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 0;
    int i,j;
    printf("Enter no of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
