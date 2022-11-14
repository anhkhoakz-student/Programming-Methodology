/*Chương 5 - Bài 145 - trang 59*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int KT_SoHoanThien(int n);
int HoanThienDau(int a[], int n);

int main() {
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = HoanThienDau(a, n);
	if(d == -1) {
		printf("Khong co so hoan thien trong array a. \n");
	} else {
		printf("So hoan thien dau tien trong array a: %d \n", d);
	}
}

void ArrayInput(int a[], int n) {
	int min = 1;
	int max = 100;
	srand(time(NULL));
	for(int i = 0; i < n; ++i) {
		a[i] = min + rand() % (max - min + 1);
	}
}

void ArrayDisplay(int a[], int n) {
	for(int i = 0; i < n; ++i) {
		printf("%d\t", a[i]);
	}
	printf("\n");
}

int KT_SoHoanThien(int n) {
	int _bool = 0;
	int s = 0;
	for(int i = 1; i < n; ++i) {
		if(n % i == 0)
			s = s + i;
	}
	if(s == n)
		_bool = 1;
	else
		_bool = 0;
	return _bool;
}

int HoanThienDau(int a[], int n) {
	int _bool = -1;
	for(int i = 0; i < n; ++i) {
		if(KT_SoHoanThien(a[i])) {
			return a[i];
		}
	}
	return _bool;
}

