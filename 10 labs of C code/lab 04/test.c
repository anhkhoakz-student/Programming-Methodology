# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>

# define Max 1000

void userInput(int [], int *);
void userOutput(int [], int);
int isPrimeNumber(int );
void printPrimeNumber(int [], int );
int isDivided(int , int);
// void k_valueInput(int );
int countDivided(int [], int, int);
int isSquareNumber(int );
int sumSquareNumber(int [], int );
int isNegative(int );
void printNegatives (int [], int);
int minNum(int [], int);
int isAllEvens(int[], int);
void printAllEvens(int [], int);
int maxNum(int [], int );
int mostAppear(int [], int );
int greatEven(int [], int);
void sortArray(int [], int);
int countAppear(int [], int , int);

int main()
{
    srand( (int)time(0) );
    int n, a[Max];
    printf("Ho va ten: Nguyen Huynh Anh Khoa\tMSSV: 522H0046\n");
    userInput(a, &n);
    userOutput(a, n);
    printf("\n\nCac so nguyen to trong mang:\n");
    printPrimeNumber(a, n);
    int k;
    printf("\nVui long nhap vao gia tri K: ");
    scanf("%d", &k);
    printf("\nSo phan tu chia het cho %d: %d\n", k, countDivided(a, n, k));
    printf("\nTong cac phan tu so chinh phuong trong mang: %d\n", sumSquareNumber(a, n));
    printNegatives(a, n);
    printf("\nGia tri nho nhat trong mang: %d\n", minNum(a, n));
    printAllEvens(a, n);
    printf("\nPhan tu cuc dai trong mang: %d\n", maxNum(a, n));
    printf("\nPhan tu chan lon nhat: %d\n", greatEven(a, n));
    printf("\nSap xep mang tang dan:\n");
    sortArray(a, n);
    printf("\nPhan tu xuat hien nhieu nhat: %d\n", mostAppear(a, n));
    printf("\nPhan tu %d xuat hien %d lan\n\n", mostAppear(a, n), countAppear(a, n, mostAppear(a, n)));
    
    return 0;
}

void userInput(int a[], int *n)
{
    do
    {   
        int i;
        printf("Vui long nhap vao mot so nguyen duong: ");
        scanf("%d", n);
        for (i = 0; i < *n; i++)
        {
            printf("Vui long nhap vao phan tu thu %d: ", i + 1);
            scanf("%d", &a[i]);
        }
        if (*n < 1 || *n > 999)
        {
            printf("Vui long nhap vao con so hop le!\n");
        } 
    }
    while (*n < 1 || *n > 999);
}

// void userInput(int a[], int *n)
// {
//     do
//     {   
//         int i;
//         int minRand = -10000, maxRand = 10000;
//         printf("\nVui long nhap vao mot so nguyen duong: ");
//         scanf("%d", n);
//         for (i = 0; i < *n; i++)
//         {
//             a[i] = minRand + rand() % (maxRand + 1 - minRand);
//         }
//         if (*n <= 0 || *n >= 1000)
//         {
//             printf("Vui long nhap vao con so hop le!\n");
//         } 
//     }
//     while (*n <= 0 || *n >= 1000);
// }

void userOutput(int a[], int n)
{
    int i;
    printf("\nCac phan tu trong mang:\n");
    for (i = 0; i < n; i ++)
    {
        printf("%d\t", a[i]);
    }
}



int isPrimeNumber(int n)
/*
Kiem tra so nguyen to: chia het cho 1 va chinh no
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
    for (i = 0; i < n; i++)
    {
        if (isPrimeNumber(a[i]) == 1)
        {
            printf("%d\t", a[i]);
        }
    }
    printf("\n");
}

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
    for (i = 0; i < n; i++)
    {
        if (isDivided(a[i], k) == 1)
            count ++;
    }
    return count;
}

int isSquareNumber(int n)
// số chính phương bằng bình phương của một số nguyên
{
    int temp = sqrt(n);
    temp = pow(temp, 2);
    if (temp == n)
        return 1;
    return 0;
}

int sumSquareNumber(int a[], int n)
// Tính tổng các phần tử số chinh phương trong A
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (isSquareNumber(a[i]) == 1)
            sum += a[i];
    }
    return sum;
}

int isNegative(int n)
{
    if (n < 0)
        return 1;
    return 0;
}

void printNegatives (int a[], int n)
// Liệt kê các phần tử âm trong A
{
    printf("\nCac so am trong mang:\n");
    int i;
    for (i = 0; i < n; i++)
    {
        if (isNegative(a[i]) == 1)
            printf("%d\t", a[i]);
    }
    printf("\n");
}

int minNum(int a[], int n)
// Tìm gía trị min
{
    int i;
    int min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int isAllEvens(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            return 0;
    }
    return 1;
}

void printAllEvens(int a[], int n)
{
    int i;
    if (isAllEvens(a, n) == 1){
        printf("Mang toan chan\n");
    }
    else{
        printf("Mang ton tai so le\n");
    }
}
int maxNum(int a[], int n)
// In ra các phần tử cực đại
{
    int i;
    int maxValue = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > maxValue)
            maxValue = a[i];
    }
    return maxValue;
}

int greatEven(int a[], int n)
// Tìm phần tử chẵn lớn nhất
{
    int i;
    int evenMax = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] >= evenMax)
            evenMax = a[i];
    }
    return evenMax;
}

void sortArray(int a[], int n)
// Sắp xếp mảng tăng dần
{
    int temp;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int countAppear(int a[], int n, int x)
// kiem tra so lan xuat hien cua x trong a
{
    int temp = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            temp++;
        }
    }
    return temp;
}

int mostAppear(int a[], int n)
/*
Tìm phần tử có tần suất xuất hiện nhiều nhất trong mảng
xuất hiện bao nhiêu lần
*/
{
    int i, temp1, temp = countAppear(a, n, a[0]), index = 0;
    for (i = 1; i < n; i++)
    {
        temp1 = countAppear(a, n, a[i]);
        if (temp < temp1)
        {
            temp = temp1;
            index = i;
        }
    }
    return a[index];
}