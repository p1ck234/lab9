#include "pch.h"

int kol(int x) {
	int a[10] = { 0 };

	while (x > 0) {
		a[x % 10]++;
		x /= 10;
	}
	int k = 0;
	for (int j = 0; j < 10; j++)
		if (a[j] != 0) k++;



	return k;
}

int func(int n, int arr[]) {
	int _id = 0;
	int max = 1;
	for (int i = 0; i < n; i++)
	{

		if (kol(arr[i]) > max) {
			max = kol(arr[i]); _id = i;
		}
		
	}

	return _id;
}

int main()
{
	return 0;
}

