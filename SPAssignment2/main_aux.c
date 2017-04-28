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

void compStepPrint(int heapNum, int objectsNum){
	printf("Computer takes %d objects from heap %d.\n", objectsNum, heapNum);
}

void statusPrint(int array[], int turnNum){
	int index = 0;
		printf("In turn %d the heap sizes are: ",turnNum);
		for (; index < HEAPSARRAYSIZE; ++index) {
			printf("h%d=%d ",index+1, array[index]);
		}
		printf(".\n");
}

