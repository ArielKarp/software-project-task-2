/*
 * main.c

 *
 *      Author: Ariel
 */

#include <stdio.h>
#include <stdlib.h>
#include "SPBufferset.h"
#include "main_aux.h"
#include "sp_nim.h"

#define HEAPSARRAYSIZE 32

int main() {

	// isUserTurn: 0- computer, 1- User
	int heapArray [HEAPSARRAYSIZE] = {0}, numOfHeaps = 0, turnNum = 0, isUserTurn = 0, objRemove = 0, heapNum = 0;

	// Input num of heaps
	printf("Enter the number of heaps:\n");
	scanf("%d", &numOfHeaps);
	if (!checkHeapsValidInputNum(numOfHeaps)) {
		printf("DEBUG: Num of heaps: %d\tExiting...\n", numOfHeaps);
		return 0;
	}
	printf("Enter the heap sizes:\n");
	if (!inputHeapsArray(heapArray, numOfHeaps)) {
		printf("DEBUG: Failed to get heaps numbers\tExiting...\n");
		return 0;
	}

	turnNum++;
	while(!arrayIsEmpty(heapArray)) {
		statusPrint(heapArray, numOfHeaps, turnNum);
		if(!isUserTurn) {
			heapNum = computeStep(heapArray, numOfHeaps, &objRemove);
			compStepPrint(heapNum, objRemove);
		} else {
			boardPrint(heapArray, numOfHeaps);
			checkHeapIndexandObjectsValidInputNum(numOfHeaps);
		}
		isUserTurn = (isUserTurn + 1) % 2;
	}
	// Change turns again after finish
	isUserTurn = (isUserTurn + 1) % 2;
	if (!isUserTurn) {
		printf("Computer wins!\n");
	} else {
		printf("You win!\n");
	}
}
