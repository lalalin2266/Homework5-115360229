#include<stdio.h>
#include<stdlib.h>
#define SIZE 5 //沒有分號
int recursiveMaximum(int str[], int a) {
	int hold;
	int i;
	for (int i = 0;i < a - 1;i++) {
		if (str[i] > str[i + 1]) {
			hold = str[i];
			str[i] = str[i + 1];
			str[i + 1] = hold;
		}

	}
	return str;
}
int main(void) {
	int str[5] = { 41,25,10,89,51};
	printf("The orginal array is:");
	for (int j = 0; j < SIZE;j++) {
		printf("%5d",str[j]);
	}
	printf("\n");
	recursiveMaximum(str, SIZE);
	printf("The Maximum is : %d", str[4]);
}