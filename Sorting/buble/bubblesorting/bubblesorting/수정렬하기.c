#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[1000];
int N, input;

int bubble(int *a) {
	int pass;
	for (pass = 1; pass <= N - 1; pass++) {
		for (int i = 1; i <= N - pass; i++) {
			if (a[i - 1] > a[i]) {
				int temp;
				temp = a[i - 1];
				a[i - 1] = a[i];
				a[i] = temp;
			}
		}
	}
	return *a;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &input);
		A[i] = input;
	}
	bubble(A);
	for (int i = 0; i < N; i++) {
		printf("%d\n", A[i]);
	}
}