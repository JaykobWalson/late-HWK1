/*
 * menu.c
 *
 *  Created on: Jun 16, 2015
 *      Author: Jaykob Walson
 */

#include <stdio.h>
#include "menu.h"
//Gets the number for what option the user wishes to do with the word.

int getMenuOption() {
	printf("*** WORD STATS MENU ***\n");
	printf("Enter %d to print vowel and consonant frequency.\n", MENU_STATS);
	printf("Enter %d to print histogram.\n", MENU_HISTO);
	printf("Enter %d to return to inputting more strings.\n", MENU_INPUT);
	printf("Enter %d to quit.\n", MENU_EXIT);
	scanf("%d", &opt);
	
	return opt;
}
