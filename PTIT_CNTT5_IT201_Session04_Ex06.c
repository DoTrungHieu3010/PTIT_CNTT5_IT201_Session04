#include <stdio.h>
#include <string.h>

int main() {
    struct SinhVien {
        int id;
        char name[50];
        int age;
    };
    struct SinhVien sinhvien[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter id: ");
        scanf("%d", &sinhvien[i].id);
        getchar();
        printf("Enter name: ");
        fgets(sinhvien[i].name, 50, stdin);
        sinhvien[i].name[strlen(sinhvien[i].name) - 1] = '\0';
        printf("Enter age: ");
        scanf("%d", &sinhvien[i].age);
    }
    int findId = 0;
    printf("Enter id you want to find: ");
    scanf("%d", &findId);
    for (int i = 0; i < 3; i++) {
        if (findId == sinhvien[i].id) {
            printf("%s %d", sinhvien[i].name, sinhvien[i].age);
            return 0;
        }
    }
}
