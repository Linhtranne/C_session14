#include<stdio.h>
int main(){
    int num = 10;
    int *ptr = &num;
    printf(" Gia tri cua num la %d\n", num);
    printf("gia tri cua num la %d\n", &num);
    printf("Dia chi cua num thong qua ptr la %d\n", *ptr);
    printf("Dia chi cua num thong qua ptr la %d\n", ptr);

}