/*
1. Nhập mảng A với n số nguyên (0 < n < 1000) (Có thể random hay thủ công)

3. Đếm có nhiêu phần từ chia hết cho k (k nhập từ bàn phím)
4. Tính tổng các phần tử số chinh phương trong A
5. Liệt kê các phần tử âm trong A
6. Tìm gía trị min

7. Mảng có toàn chẵn? đối xứng? chẵn lẻ xen kẻ? tăng dần? (chỉ chọn 1 ý)
8. In ra các phần tử cực đại
9. Tìm phần tử có tần suất xuất hiện nhiều nhất trong mảng và xuất hiện bao nhiêu lần
10. Tìm phần tử chẵn lớn nhất
11. Sắp xếp mảng tăng dần
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define Max 1000

void userInput(int [], int &);
void userOutput(int [], int);
int isPrimeNumber(int );
void printPrimeNumber(int [], int );
int isDivided(int , int);
// void k_valueInput(int );
int countDivided(int [], int, int);

int main()
{
    int n, a[Max];
    userInput(a, n);
    userOutput(a, n);
    printf("\nCac so nguyen to trong mang:\n");
    printPrimeNumber(a, n);
    printf("\n");
    int k;
    printf("Vui long nhap vao gia tri K: ");
    scanf("%d", &k);
    printf("So phan tu chia het cho %d: %d", k, countDivided(a, n, k));


    return 0;
}


// void userInput(int a[], int &n)
// {
//     do
//     {   
//         int i;
//         printf("Vui long nhap vao mot so nguyen duong: ");
//         scanf("%d", &n);
//         for (i = 0; i < n; i++)
//         {
//             printf("Vui long nhap vao phan tu thu %d: ", i + 1);
//             scanf("%d", &a[i]);
//         }
//         if (n < 1 || n > 999)
//         {
//             printf("Vui long nhap vao con so hop le!\n");
//         } 
//     }
//     while (n < 1 || n > 999);
// }

void userInput(int a[], int &n)
{
    do
    {   
        int i;
        int minRand = -100, maxRand = 100;
        printf("Vui long nhap vao mot so nguyen duong: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            a[i] = minRand + rand() % (maxRand + 1 - minRand);
        }
        if (n <= 0 || n >= 1000)
        {
            printf("Vui long nhap vao con so hop le!\n");
        } 
    }
    while (n <= 0 || n >= 1000);
}

void userOutput(int a[], int n)
{
    int i;
    printf("Cac phan tu trong mang:\n");
    for (i = 0; i < n; i ++)
    {
        printf("%d\t", a[i]);
    }
}



int isPrimeNumber(int n)
/*
Kiem tra so nguyen to
1: la so nguyen to
0: k la so nguyen to
*/
{
    if (n < 2 || n % 2 == 0)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        int i;
        for (i = 3; i < sqrt((float)n); i+=2)
        {
            if (n % i == 0)
                return 0;
        }
    }
    return 1;
}

void printPrimeNumber(int a[], int n)
// in so nguyen to
{
    int i;
    for (i = 0; i <= n; i++)
    {
        if (isPrimeNumber(a[i]) == 1)
        {
            printf("%d\t", a[i]);
        }
    }
}

// void k_valueInput(int &k)
// // nhap vao gia tri k
// {
//     do
//     {
//         printf("Vui long nhap vao mot gia tri K: ");
//         scanf("%d", &k);
//         if (k <= 0 || k >= 1000)
//         {
//             printf("Vui long nhap vao mot gia tri hop le!\n");
//         }
//     } while (k <= 0 || k >= 1000);
// }

int isDivided(int n, int k)
/*
Kiem tra n co chia het cho k khong
1: co
0: khong
*/
{
    if (n % k == 0)
        return 1;
    return 0;
}

int countDivided (int a[], int n, int k)
{
    int i, count = 0;
    for (i = 0; i <= n; i++)
    {
        if (isDivided(a[i], k) == 1)
            count ++;
    }
    return count;
}