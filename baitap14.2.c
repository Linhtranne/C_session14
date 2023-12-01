#include<stdio.h>
int main(){
    void swap( int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }
    int num1 = 10;
    int num2 = 20;
        printf("Hieu 2 so truoc khi doi cho la %d\n" , num1 - num2);
    swap( &num ,&num2);
        printf("Hieu 2 so sau khi doi cho la %d\n" , num1 - num2);
}