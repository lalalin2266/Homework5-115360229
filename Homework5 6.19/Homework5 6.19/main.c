#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	int b,c,sum;
	int a[11] = {0};//寫1個零就夠了
	srand((unsigned int )time(NULL));
	for (int i = 0;i <= 35999;i++) {
		b = 1 + rand() % (6 - 1 + 1); //min+rand()%(max-min+1)
		c = 1 + rand() % (6 - 1 + 1);
		sum = b + c;
		a[sum - 2]++;// if (sum == 2) a[0]++; else if (sum == 3)a[1]++; else if (sum == 4)a[2]++;....
	}
	printf("%5s%10s\n","sum","times");
	for (int j = 0;j <= 10;j++) {
		printf("%5d%10d\n", j + 2, a[j]);
	}
	system("pause");
	return 0;
}