/*
 * main_aux.h
 *
 *      Author: Ariel
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef MAIN_AUX_H_
#define MAIN_AUX_H_

int arrayIsEmpty(int array[]);
void compStepPrint(int heapNum, int objectsNum);
void statusPrint(int array[], int heapsNum, int turnNum);
void boardPrint(int array[], int heapsNum);
int checkHeapsValidInputNum(int heapsNum);
int checkHeapObjectValidInputNum(int heapSize, int heapNum);
int checkHeapIndexandObjectsValidInputNum(int heapsNum);
int inputHeapsArray(int array[], int heapsNum);





#endif /* MAIN_AUX_H_ */
