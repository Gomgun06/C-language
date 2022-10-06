#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int* num, int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(num + i) > *(num + j)) {
				temp = *(num + j);
				*(num + j) = *(num + i);
				*(num + i) = temp;
			}
		}
	}
}

int binarySearch(int num[], int size, int target) {
	int min, mid, max;
	min = 0, max = size - 1;
	while (min <= max) {
		mid = (min + max) / 2;
		if (num[mid] == target) {
			return mid;
		}
		else if (num[mid] > target) {
			max = mid - 1;
		}
		else if (num[mid] < target) {
			min = mid + 1;
		}
	}
	return -1;
}

int main(void) {
	srand((unsigned)time(NULL));
	int target, index = 0, size = 20;
	int a[20] = { 0 };
	for (int i = 0; i < size; i++)
		*(a + i) = rand() % 100;
	for (int i = 0; i < size; i++)
		printf("%d ", *(a + i));
	printf("\n");
	selectionSort(a, size);
	printf("찾으려는 숫자는? ");
	scanf("%d", &target);
	index = binarySearch(a, size, target);
	for (int i = 0; i < size; i++)
		printf("%d ", *(a + i));
	printf("\n");
	if (index == -1)
		printf("없습니다.");
	else
		printf("%d 위치에 있습니다.", index);
	
	return 0;
}
