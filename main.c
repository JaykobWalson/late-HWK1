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



    char input[];
	printf("Enter something to start.");
	int total = 0;
	fgets(input,MAX_INPUT_LEN,stdin);
	//Keep going until the user enters #
	while(input != '#'){
		total = total + 1;
		char word[MAX_INPUT_LEN];
		printf("Enter strings (# to stop)");
		fgets(word,MAX_INPUT_LEN,stdin);
		if(word == '#'){
			//# = stop and then prompt the numbered options.
			int option = getMenuOption();
		while (option != MENU_EXIT) {

    	if (option == MENU_INPUT) {
         while (strcmp(input,"#\n") != 0) {
			printf("Enter strings (# to stop)");
			scanf("%s", word);
			if(word == '#'){
			int option = getMenuOption();
		 }
          }
         
    	}
		if (option == MENU_STATS) {
		stats(word);
         
    	}

		if(option == MENU_HISTO){
			
		int histogram[ALPHABET_SIZE];
			for(char c = 'a'; c <= 'z'; c++){
				int counter = 0;
				for(int i = 0; i < MAX_INPUT_LEN; i++){
					if(char[i] != '\0'){
						if(char[i] == c){
							counter++;//If a letter appears again, up the counter.
						}
						for(int j = 0; j < counter; j++){
							printf("*\n");//Print the star counter times.
						}
						histogram[i] = counter;

					}

				}
				printf("%d", c);
				printf("%c", counter);

			}
		}

		if(option == MENU_EXIT){
			printf("Exiting...");
		}

		}
		}
		
	
	}
	return 0;
}
	

