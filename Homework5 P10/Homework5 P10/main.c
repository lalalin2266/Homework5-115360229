#include<stdio.h>
#include<stdlib.h>
void cubeByValue(int* nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr; //正嘗試int *nPtr = &number
}
int main(void) {
	int number = 5;
	printf("The orginal value of the number is %d\n", number);
	cubeByValue(&number);//void 所以不需要有return 改變位址之後值也會改變不用讓number等於副程式
	printf("The new value of the number is %d\n", number);
	system("pause");
	return 0;	

}