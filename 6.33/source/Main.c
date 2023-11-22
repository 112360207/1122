#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

int binarySearch(const int array[], int low, int high, int key);

int main() {
	int a[SIZE];

	srand(time(NULL));

	for (int i = 0; i < SIZE; ++i) {
		a[i] = 2 * i;
	}

	printf("�}�C����:\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("%3d ", a[i]);
	}

	int searchKey;

	while (1) {
		printf("\n��J�@�Ӿ�ƭ� (-1 ����): ");
		scanf("%d", &searchKey);

		if (searchKey == -1) {
			break;
		}

		int result = binarySearch(a, 0, SIZE - 1, searchKey);

		if (result != -1) {
			printf("���ƭȦb���� %d\n", result);
		}
		else {
			printf("�ƭȥ����\n");
		}
	}

	return 0;
}

int binarySearch(const int array[], int low, int high, int key) {
	if (low <= high) {
		int mid = (low + high) / 2;

		if (key == array[mid]) {
			return mid;
		}
		else if (key < array[mid]) {
			return binarySearch(array, low, mid - 1, key);
		}
		else {
			return binarySearch(array, mid + 1, high, key);
		}
	}

	return -1;
}