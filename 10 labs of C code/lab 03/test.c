#include <stdio.h>

int main(){
	int n = 5;
	int i;
	int product = 1;
	for (i = 1; i <= n; i++){
		product *= i;
	}
	printf("%d", product);
    return 0;
}