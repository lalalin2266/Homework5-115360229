#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int recursiveMaximum(int str[], int size) { //使用遞迴
	int a;
	if (size == 1) {
		return str[0];
	}
	a = recursiveMaximum(str, size - 1); 
	if (a < str[size - 1]) {
		a = str[size - 1];
	}
	return a;
}
int main(void) {
	int str[SIZE] = { 41,52,87,63,45 };
	printf("The orginal array is:\n");
	for (int i = 0;i < 5;i++) {
		printf("%5d", str[i]);
	}
	printf("\n");
	printf("The maximum is: %d\n", recursiveMaximum(str, SIZE));
}