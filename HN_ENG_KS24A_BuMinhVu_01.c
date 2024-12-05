#include <stdio.h>

int array[100];
int size = 0;

int main() {
    int choice;
    do {
          printf("\nMENU\n");
	printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra gia tri cac phan tu trong mang\n");
	printf("3.Tim gia tri lon nhat trong mang\n");
	printf("4.In ra tong cua tat ca cac phan tu\n");
	printf("5.Them mot phan tu vao cuoi mang\n");
	printf("6.Xoa phan tu tai mot vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu giam dan\n");
	printf("8.Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong\n");
	printf("9.In ra toan bo so nguyen to trong mang\n");
	printf("10.Sap xep mang theo thu tu tang dan\n");
	printf("11.Thoat\n");
	scanf("%d",&choice);
        switch (choice) {
            case 1: {
                printf("Nhap so phan tu: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &array[i]);
                }
                break;
            }
            case 2: {
                printf("\nCac phan tu: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                int max = array[0];
                for (int i = 1; i < size; i++) {
                    if (array[i] > max) max = array[i];
                }
                printf("\nGia tri lon nhat: %d\n", max);
                break;
            }
            case 4: {
                break;
            }
            case 5: {
                int value;
                printf("\nNhap phan tu them: ");
                scanf("%d", &value);
                array[size++] = value;
                printf("\nDa them!\n");
                break;
            }
            case 6: {
                int index;
                printf("\nNhap vi tri xoa: ");
                scanf("%d", &index);
                for (int i = index; i < size - 1; i++) {
                    array[i] = array[i + 1];
                }
                size--;
                printf("\nDa xoa!\n");
                break;
            }
            case 7: {
                for (int i = 0; i < size - 1; i++) {
                    for (int j = i + 1; j < size; j++) {
                        if (array[i] > array[j]) {
                            int temp = array[i];
                            array[i] = array[j];
                            array[j] = temp;
                        }
                    }
                }
                printf("\nDa sap xep!\n");
                break;
            }
            case 8: {
                int value, found = 0;
                printf("\nNhap gia tri tim: ");
                scanf("%d", &value);
                printf("\nVi tri: ");
                for (int i = 0; i < size; i++) {
                    if (array[i] == value) {
                        printf("%d ", i);
                        found = 1;
                    }
                }
                if (!found) printf("Khong tim thay!");
                printf("\n");
                break;
            }
            case 9: {
				break;
			case 10: {
				break;
			}	
            case 11: {
                printf("\nThoat!\n");
                break;
            }
            default: {
                printf("\nLua chon khong hop le!\n");
                break;
            }
        }
    } while (choice!=11);
    return 0;
}
