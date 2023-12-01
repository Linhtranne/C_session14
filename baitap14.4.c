#include <stdio.h>

void nhapMang(int a[] , int *n){
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    for(int i = 0; i < *n; i++){
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
}

void inMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
void inMang2(int b[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
}

void saoChepMang(int a[], int b[], int n){
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
}

void doiChoMang(int a[], int b[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void daoNguocMang(int a[], int n){
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

void timKiem(int a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            printf("Phan tu %d xuat hien tai vi tri %d\n", x, i);
            return;
        }
    }
    printf("Phan tu %d khong xuat hien trong mang\n", x);
}

int main(){
    int a[100], b[100], n, m, choice, x;
    do{
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. In ra mang\n");
        printf("3. Sao chep mang vao mang khac\n");
        printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau\n");
        printf("5. Dao nguoc mang\n");
        printf("6. Nhap vao 1 ky tu, tim kiem ky tu do trong mang\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                nhapMang(a, &n);
                break;
            case 2:
                inMang(a, n);
                break;
            case 3:
                saoChepMang(a, b, n);
                inMang2(b, n);
                break;
            case 4:
                nhapMang(b, &m);
                doiChoMang(a, b, n);
                break;
            case 5:
                daoNguocMang(a, n);
                break;
            case 6:
                printf("Nhap ky tu can tim: ");
                scanf("%d", &x);
                timKiem(a, n, x);
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }
    }while(choice != 7);
    return 0;
}