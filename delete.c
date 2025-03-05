#include<stdio.h>
void main(){
    int a[]={1,2,3,4,5};
    int n,i=0;

    printf("Enter the element to delete: ");
    scanf("%d",&n);

    while(a[i]!=n && i<5){
        i++;
    }
    if(i==5){
        printf("\nElement not found\n");
    }
    else{
        while(i<4){
            a[i]=a[i+1];
            i++;
        }
    }

    for(int i=0;i<4;i++){
        printf("%d  ",a[i]);
    }
}
