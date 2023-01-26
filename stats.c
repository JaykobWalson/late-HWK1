/*
 * histo.c
  Author: Jaykob Walson
 */

#include <stdio.h>
#include <string.h>
#include "defs.h"
#include "stats.h"
/**
*Prints out the percentage of vowels and percentage of constants, as well as the times they occur in the word/graph.
*/
void stats(char someWord[]){
int vowels = 0; //number of vowels spotted
int constants = 0; //number of non vowels
		for(int i = 0; i < MAX_INPUT_LEN; i++){//\0 is null, so null spots won't be examined
			if(someWord[i] != '\0'){

				if(someWord[i] == 'a' || someWord[i] == 'e' || someWord[i] == 'i' || someWord[i] == 'o' || someWord[i] == 'u' || someWord[i] == 'y'){
				vowels = vowels + 1;
			}
				else{
				constants = constants + 1;
				}

			}
				

		}
		float vowelPercentage = (vowels/MAX_INPUT_LEN) * 100;
		float constantPercentage = (constants/MAX_INPUT_LEN) * 100;

		printf("%d vowels making up %f percent\n", vowels, vowelPercentage);
		printf("%d constants making up %f percent\n", constants, constantPercentage);
}