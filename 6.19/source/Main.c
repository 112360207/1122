#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROLLS 36000
#define SIDES 6
int main() {
	int frequency[13] = { 0 };  
	srand(time(NULL));
	for (int i = 0; i < ROLLS; ++i) {
		int sum = 1 + rand() % SIDES + 1 + rand() % SIDES;
		frequency[sum]++;
	}
	printf("%-10s%-15s\n", "點數", "出現次數");
	for (int j = 2; j <= 12; ++j) {
		printf("%-10d%-15d\n", j, frequency[j]);
	}
	return 0;
}