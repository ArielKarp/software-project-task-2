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
void statusPrint(int array[], int turnNum);
void boardPrint(int array[], int heapsNum);
int checkHeapsValidInputNum(int heapsNum);
int checkHeapObjectValidInputNum(int heapSize);
int checkHeapIndexandObjectsValidInputNum(int heapNum, int heapSize);





#endif /* MAIN_AUX_H_ */
