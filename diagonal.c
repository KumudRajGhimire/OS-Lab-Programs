//program to find sum of left diagonal

#include<stdio.h>
void main(){
    int n, sum=0;
    printf("Enter the no or rows: ");
    scanf("%d",&n);
    int a[n][n];

    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        sum = sum+a[i][i];
    }

    printf("\nThe sum of left diagonal is: %d",sum);
}
