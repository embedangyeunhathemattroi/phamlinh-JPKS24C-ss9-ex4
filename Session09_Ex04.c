#include <stdio.h>

int main() {
    int arr[100], n = 0;
    int lua_chon;
    int i;

    while (1) {
        printf("      MENU    \n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);

                for (i = 0; i < n; i++) {
                    printf("Nhap phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if (n == 0) {
                    printf("Mang hien tai khong chua phan tu nao: \n");
                } else {
                    printf("Mang hien tai: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if (n < 100) {
                    int a;
                    printf("Nhap gia tri phan tu moi: ");
                    scanf("%d", &a);
                    //them phan tu vao cuoi mang
                    arr[n] = a;
                    //tang kich thuoc mang len 1
                    n++;
                    printf("%d da duoc ban them vao mang: \n", a);
                } else {
                    printf("khong the them phan tu do mang da max: \n");
                }
                break;

            case 4:
                if (n > 0) {
                    int index, phan_tu_moi;
                    printf("Nhap vi tri phan tu can sua (luu y chi nhap 0 den %d): ", n - 1);
                    scanf("%d", &index);

                    if (index >= 0 && index < n) {
                        printf("Nhap gia tri moi cho phan tu tai vi tri %d: ", index);
                        scanf("%d", &phan_tu_moi);
                        arr[index] = phan_tu_moi;
                        printf("Phan tu tai vi tri %d da duoc sua la %d: \n", index, phan_tu_moi);
                    } else {
                        printf("Vi tri ban nhap khong hop le: \n");
                    }
                } else {
                    printf("khong co phan tu trong mang de sua: \n");
                }
                break;

            case 5:
                if (n > 0) {
                    int index;
                    printf("Nhap vi tri phan tu can xoa (luu y chi nhap tu 0 den %d): ", n - 1);
                    scanf("%d", &index);

                    if (index >= 0 && index < n) {
                        for (i = index; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                        printf("Phan tu tai vi tri %d da duoc xoa: \n", index);
                    } else {
                        printf("Vi tri ban nhap khong hop le: \n");
                    }
                } else {
                    printf("khogn co phan tu nao trong mang de xoa: \n");
                }
                break;

            case 6:
                printf("Thoat chuong trinh: \n");
                break;

            default:
                printf("lua chon cua ban khong hop le vui long nhap lai: \n");
        }
    }
    return 0;
}

