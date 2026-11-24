#include<stdio.h>
#include<stdlib.h>
#define SIZE 10 //不可以加分號
void swap(int* elementPtr, int* element2Ptr) { //函式中不可有別的函式宣告
	int t;//int *elementPtr = &array[j]
	t = *elementPtr;
	*elementPtr = *element2Ptr;
	*element2Ptr = t;
}
void bubbleSort(int array[], const int size) { //int *array也可以
	int pass;
	int j;
	for (pass = 0;pass < size - 1;pass++) { //因為有array[j+1]如果沒size-1會出現a[10](沒這東西)
		for (j = 0;j < size - 1;j++) {
			if (array[j] > array[j + 1]) {
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}
int main(void){
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int i;
	printf("Data items in original order\n");//原本的陣列
	for (i = 0;i < SIZE;i++) {
		printf("%4d", a[i]);
		
	}
	printf("\nData items in accending order\n");
	bubbleSort(a, SIZE);//int *array = a; a本身就是位址a[i]是值要加&
	for (i = 0; i < SIZE;i++) {
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}