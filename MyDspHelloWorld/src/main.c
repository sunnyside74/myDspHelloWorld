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
	while (*str)
	{
		putchar(*(str++));
	}
	fflush(stdout);
}

int main(void)
{
	int i = 0;

//	printf("Hello, World!!\n");

	for (i = 0; i < 10; i++)
	{
		putstring("~   ...\n");
		putstring("~  I ...\n");
		putstring("~  IN ...\n");
		putstring("~  INI ...\n");
		putstring("~  INIT ...\n");
		putstring("~  INITI ...\n");
		putstring("~  INITIA ...\n");
		putstring("~  INITIAL ...\n");
		putstring("~  INITIALI ...\n");
		putstring("~  INITIALIZ ...\n");
		putstring("~  INITIALIZI ...\n");
		putstring("~  INITIALIZIN ...\n");
		putstring("~  INITIALIZING ...\n");
	}

//	DSPF_sp_fir_gen();
	return 0;
}

