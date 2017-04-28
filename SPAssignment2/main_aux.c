/*
 * main_aux.c
 *
 *      Author: Ariel
 */

#include "main_aux.h"

#define HEAPSARRAYSIZE 32

int arrayIsEmpty(int array[]) {
	int index = 0;
	for (; index < HEAPSARRAYSIZE; ++index) {
		if (array[index] != 0) {
			return 0;
		}
	}
	return 1;
}

void compStepPrint(int heapNum, int objectsNum) {
	printf("Computer takes %d objects from heap %d.\n", objectsNum, heapNum);
}

void statusPrint(int array[], int heapsNum, int turnNum) {
	int index = 0;
	printf("In turn %d the heap sizes are: ", turnNum);
	for (; index < heapsNum - 1; ++index) {
		printf("h%d=%d ", index + 1, array[index]);
	}
	printf("h%d=%d", heapsNum, array[heapsNum - 1]);
	printf(".\n");
}

void boardPrint(int array[], int heapsNum) {
	int maxObjects = 0;
	int index = 0;
	for (; index < HEAPSARRAYSIZE; ++index) {
		if (array[index] > maxObjects) {
			maxObjects = array[index];
		}
	}
	int heapIndex = 0;
	for (; heapIndex < maxObjects; ++heapIndex) {
		int index = 0;
		for (; index < heapsNum; ++index) {
			if(array[heapsNum]>=maxObjects){
				printf("*\t");
			}
			else{
				printf("\t");
			}
		}
		maxObjects--;
	}
}

