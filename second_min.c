#include<stdio.h>
void main(){
    int a[] = {1,2,3,4,5};
    int min=9999;
    int sec_min=9999;

    for(int i=0;i<5;i++){
        if(a[i]<min){
            min=a[i];
        }
    }

    for(int i=0;i<5;i++){
        if(a[i]<sec_min && a[i]!=min){
            sec_min=a[i];
        }
    }

    printf("\nThe second smallest element is: %d\n", sec_min);
}
