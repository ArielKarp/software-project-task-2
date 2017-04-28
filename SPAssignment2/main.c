/*
 * main.c

 *
 *      Author: Ariel
 */

#include <stdio.h>
#include <stdlib.h>
#include "SPBufferset.h"
#include "main_aux.h"

int main() {
	int arr[] = {1,3,2,0};
	statusPrint(arr, 4, 200);
	boardPrint(arr,4);

	return 0;
}
