/*
 * main.c
 *
 *      Author: Ariel Karpilovski 308552454
 *      		Ron Tabibian 308472596
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef MAIN_AUX_H_
#define MAIN_AUX_H_

int powIm(int num, int p);
int arrayIsEmpty(int heapsArray[]);
void compStepPrint(int heapNum, int objectsNum);
void statusPrint(int heapsArray[], int numOfHeaps, int turnNum);
void boardPrint(int heapsArray[], int numOfHeaps);
int checkHeapsValidInputNum(int numOfHeaps);
int checkHeapObjectValidInputNum(int heapSize, int heapNum);
int checkHeapIndexandObjectsValidInputNum(int heapsArray[], int numOfHeaps);
int inputHeapsArray(int heapsArray[], int numOfHeaps);





#endif /* MAIN_AUX_H_ */
