#include <stdio.h>
#include <string.h>

void nhapChuoi(char s[]){
    printf("Nhap chuoi: ");
    scanf("%s", s);
}

void inChuoi(char s[]){
    printf("%s\n", s);
}

void saoChepChuoi(char s1[], char s2[]){
    strcpy(s2, s1);
}

void themChuoi(char s1[], char s2[]){
    strcat(s1, s2);
}

void soSanhChuoi(char s1[], char s2[]){
    int res = strcmp(s1, s2);
    if(res == 0){
        printf("Hai chuoi giong nhau\n");
    } else if(res < 0){
        printf("Chuoi thu nhat nho hon chuoi thu hai\n");
    } else{
        printf("Chuoi thu nhat lon hon chuoi thu hai\n");
    }
}

void daoNguocChuoi(char s[]){
    int n = strlen(s);
    for(int i = 0; i < n/2; i++){
        char temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }
}

int main(){
    char s1[100], s2[100];
    int choice;
    do{
        printf("MENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Sao chep chuoi vao mot chuoi khac\n");
        printf("4. Nhap vao chuoi khac, tien hanh them chuoi do vao chuoi ban dau\n");
        printf("5. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("6. In ra chuoi dao nguoc\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                nhapChuoi(s1);
                break;
            case 2:
                inChuoi(s1);
                break;
            case 3:
                saoChepChuoi(s1, s2);
                break;
            case 4:
                nhapChuoi(s2);
                themChuoi(s1, s2);
                break;
            case 5:
                nhapChuoi(s2);
                soSanhChuoi(s1, s2);
                break;
            case 6:
                daoNguocChuoi(s1);
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }
    }
    while(choice != 7);
    return 0;
}