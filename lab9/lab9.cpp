#include "pch.h"

int kol(int x, int a[10] = { 0 }) {
	int i = 0;
	while (x > 0) {
		a[x % 10]++;
		x /= 10;
		i++;
	}
	return i;
}

int func(int n, int arr[]) {
	int counter = 0;
	int max = 1, m, temp = 0;
	for (int i = 0; i < n; i++)
	{
		int a[10] = { 0 };
		m = kol(arr[i], a);
		for (int j = 0; j < 10; j++)
			if (max < a[j])
			{
				max = a[j];
				temp = i;
			}
	}

	return temp;
}

int main()
{
    return 0;
}
