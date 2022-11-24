#include <stdio.h>

int main(){
    int Coca = 3000, Green_tea = 6000, Sting = 4000, Milk = 5000, Water = 3000;
    int userChoice;
    
    printf("Vui long chon loai nuoc giai khac\n");
    printf("1. Coca:\t%d\n", Coca);
    printf("2. Trà xanh:\t%d\n", Green_tea);
    printf("3. Sting:\t%d\n", Sting);
    printf("4. Sữa tươi:\t%d\n", Milk);
    printf("5. Nước suối:\t%d\n", Water);

    do {
    printf("Vui long chon loai nuoc giai khat (1 - 5):\n");
    scanf("%d", &userChoice);
    if (userChoice < 1 || userChoice > 5){
        printf("Vui long chon ma san pham hop le\n");
    }
    } while (userChoice < 1 || userChoice > 5);

    switch (userChoice){
        case 1:
            printf("Khach hang da mua Coca\nSo tien phai tra la:%d", Coca);
            break;
        case 2:
            printf("Khach hang da mua Tra xanh\nSo tien phai tra la:%d", Green_tea);
            break;
        case 3:
            printf("Khach hang da mua Sting\nSo tien phai tra la:%d", Sting);
            break;
        case 4:
            printf("Khach hang da mua Sua tuoi\nSo tien phai tra la:%d", Milk);
            break;
        case 5:
            printf("Khach hang da mua Nuoc suoi\nSo tien phai tra la:%d", Water);
            break;
    }
    
    return 0;
}