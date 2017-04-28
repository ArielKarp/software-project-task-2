/*
 * sp_nim.h
 *
 *      Author: Ariel
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef SP_NIM_H_
#define SP_NIM_H_

int computeStep(int heapArray[], int arrSize, int* objectRemoved);
int computeNimSum(int heapArray[], int arrSize);
int findWinnerHeap(int heapArray[], int arrSize, int nimSum);
int findFirstPositiveHeap(int heapArray[], int arrSize);



#endif /* SP_NIM_H_ */
