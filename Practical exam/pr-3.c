#include<stdio.h>
int main(){
    int arr[5];

    for(int i=0; i<5; i++){
        printf("enter the an element of arr[%d]=",i);
        scanf("%d",arr+i);
    }
    for (int i = 0; i < 5 ; i++)
    {
        printf("\n arr[%d]=%d",i,(*(arr + i))**(arr+i));
    }
    return 0;
    
    
}