/**
 * @file main.c
 *
 * @brief DSP 학습 프로젝트의
 *
 *  Created on: 2014. 7. 4.
 *      Author: i04055_macwin
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dsplib.h"

void putstring(char *str)
{
	while (*str) {
		putchar( *(str++) );
	}
	fflush(stdout);
}

int main(void)
{
	int i = 0;

//	printf("Hello, World!!\n");

	for (i = 0; i < 10; i++)
	{
		putstring("~  I ...");
		putstring("~  IN ...");
		putstring("~  INI ...");
		putstring("~  INIT ...");
		putstring("~  INITI ...");
		putstring("~  INITIA ...");
		putstring("~  INITIAL ...");
		putstring("~  INITIALI ...");
		putstring("~  INITIALIZ ...");
		putstring("~  INITIALIZI ...");
		putstring("~  INITIALIZIN ...");
		putstring("~  INITIALIZING ...");
	}


	return 0;
}

