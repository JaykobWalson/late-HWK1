/*
 * main.c
 *
 *  Created on: Jun 15, 2015
 *      Author: Jaykob Walson
 */
#include <stdio.h>
#include <string.h>
#include "defs.h"
#include "stats.h"
#include "menu.h"

/**
 * @brief Main function
 *
 * @param argc Ignore
 * @param argv Ignore
 * @return int
 */
int main(int argc, char *argv[]) {
int histogram[ALPHABET_SIZE];//histogram for building later;


	//Keep going until the user enters #
	char word[MAX_INPUT_LEN];
	//int total = 0;
	while(word[0] != '#'){
		printf("Enter strings (# to stop)");
		fgets(word,MAX_INPUT_LEN,stdin);
		//total = total + 1;
		if(word[0] == '#'){
			break;
		}
	}
		
			//# = stop and then prompt the numbered options.
			
			int option = getMenuOption();
			while (option != MENU_EXIT) {
    	if (option == MENU_INPUT) {
         while (strcmp(word,"#\n") != 0) {
		printf("Enter strings (# to stop)");
		fgets(word,MAX_INPUT_LEN,stdin);
			if(word[0] == '#'){
			option = getMenuOption();
			break;
		 }
          }
         
    	}
		if (option == MENU_STATS) {
		stats(word);
        break;
    	}

		if(option == MENU_HISTO){
			
			for(char c = 'a'; c <= 'z'; c++){
				int counter = 0;
				for(int i = 0; i < strlen(word); i++){
					if(word[i] != '\0'){
						if(word[i] == c){
							counter = counter + 1;//If a letter appears again, up the counter.
						}
						for(int j = 0; j < counter; j++){
							printf("*\n");//Print the star counter times.
						}
						histogram[c - 'a'] = counter;

					}
					printf("%d", histogram[i]);
				}
				printf("%c", c);
				
				

			}
			break;
		}

		if(option == MENU_EXIT){
			printf("Exiting...");
			break;
		}

			}
		
		
		
	
	
	return 0;
}
	

