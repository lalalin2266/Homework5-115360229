#include<stdio.h>
#include<stdlib.h>
void cubeByValue(int& nPtr) { //int &nPtr = number 改變&nPtr是number的另一個型態改變nPtr就是改變number
	nPtr = nPtr * nPtr * nPtr;
}
int main(void) {
	int number = 5;
	printf("The original value of the number is %d\n", number);
	cubeByValue(number);
	printf("The new value of the number is %d\n", number);
	system("pause");
	return 0;
}