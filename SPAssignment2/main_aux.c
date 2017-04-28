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
	for (; index < heapsNum; ++index) {
		if (array[index] > maxObjects) {
			maxObjects = array[index];
		}
	}

	int lineIndex = 1;
	for (; lineIndex <= maxObjects; maxObjects--) {
		int heapindex = 0;
		for (; heapindex < heapsNum; ++heapindex) {
			if(array[heapindex]>=maxObjects){
				printf("*\t");
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}

int checkHeapsValidInputNum(int heapsNum){
	if(heapsNum<1 || heapsNum>32){
		printf("Error: the number of heaps must be between 1 and 32.\n");
		return 0;
	}
	return 1;
}

int checkHeapObjectValidInputNum(int heapSize, int heapNum){
	if(heapSize<=0){
		printf("Error: the size of heap %d should be positive.\n", heapNum);
		return 0;
	}
	return 1;
}

//int checkHeapIndexandObjectsValidInputNum(int heapNum, int heapSize);

int inputHeapsArray(int array[], int heapsNum){
	printf("Enter the heap sizes:\n");
	int intChar;
	getchar();
	while ((intChar = getchar()) != '\n' && intChar != EOF && heapsNum!=0) {
		while

		}

}
