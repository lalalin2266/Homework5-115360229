#include <stdio.h>
#define SIZE 15 
int binarySearch(const int b[], int low, int high, int searchKey) {//low = 0; high = size-1;
    // 搜尋區間已空，代表找不到
    if (low > high) {
        return -1; 
    }
    int middle =( low + high ) / 2; 

    // 找到目標，回傳在陣列的哪一項
    if (b[middle] == searchKey) {
        return middle;
    }
    // 目標較小：往左半邊遞迴搜尋
    else if (searchKey < b[middle]) {
        return binarySearch(b, low, middle - 1, searchKey);
    }
    // 目標較大：往右半邊遞迴搜尋
    else {
        return binarySearch(b, middle + 1, high, searchKey);
    }
}

int main(void) {
    // 已排序的整數陣列（二分搜尋的前提）
    int a[SIZE] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28 };
    int searchKey;

    printf("Enter a number between 0 and 28: ");
    scanf_s("%d", &searchKey);

    // 呼叫遞迴函式，起始索引為 0，結束索引為 SIZE - 1
    int result = binarySearch(a, 0, SIZE - 1, searchKey);

    if (result != -1) {
        printf("Found at subscript %d\n", result);
    }
    else {
        printf("%d not found\n", searchKey);
    }

    return 0;
}

