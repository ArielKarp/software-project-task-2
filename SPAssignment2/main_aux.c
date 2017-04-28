/*
 * main_aux.c
 *
 *      Author: Ariel
 */

#include "main_aux.h"

#define HEAPSARRAYSIZE 32

// p >= 0
int powIm(int num, int p) {
	if (p == 0) {
		return 1;
	} else if (p == 1) {
		return num;
	}
	int index = 0, output = num;
	for (; index < (p - 1); ++index) {
		output = output * num;
	}
	return output;
}

int arrayIsEmpty(int heapsArray[]) {
	int index = 0;
	for (; index < HEAPSARRAYSIZE; ++index) {
		if (heapsArray[index] != 0) {
			return 0;
		}
	}
	return 1;
}

void compStepPrint(int heapNum, int objectsNum) {
	printf("Computer takes %d objects from heap %d.\n", objectsNum, heapNum);
}

void statusPrint(int heapsArray[], int numOfHeaps, int turnNum) {
	int index = 0;
	printf("In turn %d the heap sizes are: ", turnNum);
	for (; index < numOfHeaps - 1; ++index) {
		printf("h%d=%d ", index + 1, heapsArray[index]);
	}
	printf("h%d=%d", numOfHeaps, heapsArray[numOfHeaps - 1]);
	printf(".\n");
}

void boardPrint(int heapsArray[], int numOfHeaps) {
	int maxObjects = 0;
	int index = 0;
	for (; index < numOfHeaps; ++index) {
		if (heapsArray[index] > maxObjects) {
			maxObjects = heapsArray[index];
		}
	}

	int lineIndex = 1;
	for (; lineIndex <= maxObjects; maxObjects--) {
		int heapindex = 0;
		for (; heapindex < numOfHeaps; ++heapindex) {
			if (heapsArray[heapindex] >= maxObjects) {
				printf("*\t");
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
}

int checkHeapsValidInputNum(int numOfHeaps) {
	if (numOfHeaps < 1 || numOfHeaps > 32) {
		printf("Error: the number of heaps must be between 1 and 32.\n");
		return 0;
	}
	return 1;
}

int checkHeapObjectValidInputNum(int heapSize, int heapNum) {
	if (heapSize <= 0) {
		printf("Error: the size of heap %d should be positive.\n", heapNum);
		return 0;
	}
	return 1;
}

int checkHeapIndexandObjectsValidInputNum(int heapsArray[], int numOfHeaps){
	int numLen = 0;
	int num = 0;
	int intChar = 0;
	int finished = 0;
	int heapIndex = 0, numOfObj = 0;
	printf("Your turn: please enter the	heap index and the number of removed objects.\n");
	getchar();
	while (!finished){
		// Get heap index
		while ((intChar = getchar()) != ' ') {
			num = (intChar - 48) + (num * powIm(10, numLen));
			numLen++;
		}
		heapIndex = num;
		numLen = 0;
		num = 0;
		getchar();
		// Get num of Objects
		while ((intChar = getchar()) != '\n' && intChar != EOF) {
			num = (intChar - 48) + (num * powIm(10, numLen));
			numLen++;
		}
		numOfObj = num;
		if(heapIndex < 1 || heapIndex > numOfHeaps || numOfObj > heapsArray[heapIndex -1]) {
			printf("Error: Invalid input.\nPlease enter again the heap "
					"index and the number of removed objects.\n");
			heapIndex = 0;
			numOfObj = 0;
		} else {
			finished = 1;
		}
	}
	printf("You take X objects from heap Y.\n");
	heapsArray[heapIndex -1] = heapsArray[heapIndex -1] - numOfObj;

	return 1;
}

int inputHeapsArray(int heapsArray[], int numOfHeaps) {
	int numLen = 0;
	int num = 0;
	int arrayIndex = 0;
	int intChar = 0;
	printf("Enter the heap sizes:\n");
	getchar();
	while ((intChar = getchar()) != '\n' && intChar != EOF && numOfHeaps != 0) {
		if (intChar != ' ') {
			num = (intChar - 48) + (num * powIm(10, numLen));
			numLen++;
		} else {
			if(num > 0){
				heapsArray[arrayIndex] = num;
				arrayIndex++;
				numLen = 0;
				num = 0;
			}
			else{
				printf("Error: the size of heap %d should be positive.\n", arrayIndex+1);
				return 0;
			}
		}
		numOfHeaps--;
	}
	return 1;

}
