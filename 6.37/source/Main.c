#include <stdio.h>

int recursiveMaximum(const int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	else {
		int maxOfRest = recursiveMaximum(arr + 1, size - 1);
		return (arr[0] > maxOfRest) ? arr[0] : maxOfRest;
	}
}
int main(void) {
	int numbers[] = { 12, 5, 8, 23, 17, 6 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	printf("The maximum element in the array is: %d\n", recursiveMaximum(numbers, size));
	return 0;
}

