#include<stdio.h>
void main(){
    int a[] = {1,2,3,4,5};
    int max=-9999;
    int sec_max=-999;

    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    for(int i=0;i<5;i++){
        if(a[i]>sec_max && a[i]!=max){
            sec_max=a[i];
        }
    }

    printf("\nThe second largest element is: %d\n", sec_max);
}
