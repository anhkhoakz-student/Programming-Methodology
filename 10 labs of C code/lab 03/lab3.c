/*
Nhap so nguyen n (n >0, n chan)

6. Tinh S= 1+1/2+1/3+1/4+...+1/n

9. SV tu dat cau hoi?
10. SV tu dat cau hoi?
*/

# include <stdio.h>
# include <math.h>

int isPerfectNumber(int );

void PerfectNumberList (int );

int isSquareNumber(int );

int SumSquareNumber(int );

int PerfectNumberCount(int );

int isArmstrong(int );

void ArmstrongList(int );

int isPalindrome(int );

void PalidromeNotification(int );

double calculate_sum_of_1perN(int );

int factorial(int );

void multiplication_table(int );

int main(){
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	int n = 200;
	// PerfectNumberList(n);
	// printf("%d", isPerfectNumber(24));
	// printf("%d", SumSquareNumber(n));
	// printf("%d", isArmstrong(n));
	// ArmstrongList(n);
	// printf("%d", isPalindrome(n));
	// PalidromeNotification(n);
	// printf("%lf", calculate_sum_of_1perN(n));
	// printf("%d", factorial(n));
	// multiplication_table(n);
	return 0;
}

int isPerfectNumber(int n){
	//A number is a perfect number if is equal to sum of its proper divisors, that is, sum of its positive divisors excluding the number itself
	// 1 is perfect; 0 is not
	int sum = 0;
	int i;
	for (i = 1; i < n; i++){
		if (n % i == 0){
			sum += i;
		}
		if (sum == n){
			return 1;
		}
	}
	return 0;
}

void PerfectNumberList (int n){
	// Liet ke cac so hoan thien 1 -> n
	int i;
	for (i = 1; i <= n; i++){
		if (isPerfectNumber(i) == 1){
			printf("%d ", i);
		}
	}
}

int isSquareNumber (int n){
	// Số chính phương hay còn gọi là số hình vuông là số tự nhiên có căn bậc hai là một số tự nhiên, hay nói cách khác, số chính phương bằng bình phương (lũy thừa bậc 2) của một số nguyên
	// 1 is Square; 0 is not
	int temp;
	temp = sqrt(n);
	if (n == pow(temp, 2)){
		return 1;
	}
	return 0;
}

int SumSquareNumber(int n){
	// Tong cac so chinh phuong tu 1 -> n
	int sum = 0;
	int i;
	for (i = 1; i <= n; i++){
		if(isSquareNumber(i) == 1){
			sum += i;
		}
	}
	return sum;
}

int PerfectNumberCount(int n){
	// Dem cac so hoan thien tu 1 -> n
	int count = 0;
	int i;
	for (i = 1; i <= n; i++){
		if (isPerfectNumber(i) == 1){
			count++;
		}
	}
	return count;
}

int isArmstrong(int n){
	// 1 is armstrong, 0 is not
	int temp = n;
	int digitNumber = log10(temp) + 1;
	int sum = 0;
	int remainder;
	while (temp != 0){
		remainder = temp % 10;
		sum += pow(remainder, digitNumber);
		temp /= 10;
	}
	if (sum == n){
		return 1;
	}
	return 0;
}

void ArmstrongList(int n){
	// Liet ke cac so Armstrong tu n -> 10.000
	int i;
	for (i = 10000; n <= i; n++)
		if (isArmstrong(n) == 1){
			printf("%d ", n);
		}
}

int isPalindrome(int n){
	// palindrome: doc xuoi nguoc deu giong nhu nhau.
	// 1 is Palindrome; 0 is not
	int temp = n;
	int sum = 0;
	int remainder;
	while (temp != 0){
		remainder = temp % 10;
		sum = (sum * 10) + remainder;
		temp /= 10;
	}
	if (sum == n){
		return 1;
	}
	return 0;
}

void PalidromeNotification(int n){
	if (isPalindrome(n) == 1){
		printf("%d la so Palidrome\n", n);
	}
	else{
		printf("%d khong la so Palidrome\n", n);
	}
}

double calculate_sum_of_1perN(int n){
	// chua lam duoc
	int i;
	double sum = 0;
	for (i = 1; i <= n; i++){
		sum += (1/i);
	}
	return sum;
}

int factorial(int n){
	// Tinh n!
	int i;
	int product = 1;
	for (i = 1; i <= n; i++){
		product *= i;
	}
	return product;
}
void multiplication_table(int n){
	// In bang cuu chuong n
	int i;
	for (i = 1; i < 11; i++){
		printf("%d x %d = %d\n", i, n, i * n);
	}
}