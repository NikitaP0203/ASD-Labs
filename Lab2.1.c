#include <stdio.h>
#include <windows.h>

int BinarySearch(double arr[8]) {
	int min_value = 0, max_value = 5;
	int mid = 3, high = 0, low = 7;

	while (high < low) {
		if (arr[mid] <= 5 && arr[mid] >= 0) {
			return mid;
			break;
		}

		if (arr[mid] <= 0) {
			low = mid;
		} else {
			high = mid + 1;
		}
		mid = (low + high) / 2;
	
		if (high >= low) {
			printf("Item Missing!\n");
			return -1;
		}
	}
}

int main(void) {
	double arr[8][8] = {{434, 124.7, 93.6, 28, 8.4, 4.9, 1.7, -13},
						{346.7, 28.1, 19.4, 17, 12.7, 7, 5, -2},
						{323, 24, 3.6, 0, -2.5, -7, -8, -12},
						{63, 19.5, 14, 3.3, -11, -89, -100, -123},
						{49, 9, 4.4, -4.1, -24, -38, -46, -52},
						{17, 1, -10, -48, -62.7, -84, -98, -120},
						{4.9, -3.9, -17, -42, -68.9, -73, -90, -730},
						{1.6, 0.7, -6, -10, -25.8, -39, -45.7, -106}};

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			printf("%.1f     ", arr[i][j]);
		}
		printf("\n\n");
	}
	
	//SEARCH IN THE LAST ROW
	printf("Index in the last row: %d\n", BinarySearch(arr[7]));

	//SEARCH IN THE FIRST COLUMN
	double fc[8];
	for (int i = 0; i < 8; i++){
		fc[i] = arr[i][0];
	}
	printf("Index in first column: %d", BinarySearch(fc));

	return 0;
}