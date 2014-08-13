#include <stdio.h>

#define MAX 100 // number of elements in array

static void assignment1(int *array, int size);
static void assignment2(int *array, int size);

int input(int *array) {
	int size;
	printf("Size of array: ");
	scanf("%d", &size);
	getchar();
	int i;
	for (i = 0; i <= size - 1; i++) {
		printf("Elements %d: ", i + 1);
		scanf("%d", &array[i]);
	}
	return size;
}

int main(argc, argv)
	int argc;char **argv; {
	int array[MAX];
	int size;
	size = input(array);

	puts("\nAssignment 1");
	assignment1(array, size);

	puts("\nAssignment 2");
	assignment2(array, size);

	return 1;
}

static void assignment1(array, size)
	int *array;int size; {
	int positive_sum, negative_sum;
	positive_sum = 0;
	negative_sum = 0;
	int i;
	for (i = 0; i <= size - 1; i++) {
		if (array[i] > 0)
			positive_sum += array[i];
		else
			negative_sum += array[i];
	}
	printf("Sum of positive elements: %d\n", positive_sum);
	printf("Sum of positive elements: %d\n", negative_sum);
}

static void assignment2(array, size)
	int *array;int size; {
	int count;
	count = 0;
	int i;
	for (i = 0; i <= size - 1; i++) {
		if (array[i] < 0)
			count++;
	}
	printf("Number of negative elements: %d\n", count);
}
