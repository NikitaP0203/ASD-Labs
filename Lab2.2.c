#include <stdio.h>
#include <windows.h>
#include <iso646.h>

void printArray(int arr[5][6]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

int main(void) {
	int inpArr[5][6] = {{34, 44, 76, 14, 9, 23},
						{16, 23, 21, 2, 8, 18},
						{9, 12, -2, 0, 5, 2},
						{7, 8, -4, -7, 1, -4},
						{5, 3, -10, -8, -3, -6}};

	printf("Input Array:\n");
	printArray(inpArr);

	for (int j = 0; j < 6; j++) {
	
		for (int i = 1; i < 5; i++) {
			int k = i;
			while (k > 0 and inpArr[k - 1][j] > inpArr[k][j]) {
				int temp = inpArr[k - 1][j];
				inpArr[k - 1][j] = inpArr[k][j];
				inpArr[k][j] = temp;
				k -= 1;
			}
		}

	}

	printf("Output Array:\n");
	printArray(inpArr);
	return 0;
}