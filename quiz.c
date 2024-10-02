/* Jeslyn Lu, lu196, October 3rd, 2024
 *
 * Quiz allows user to answer three quiz questions.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* display_usage
 *
 * Prints the brief usage details of quiz
 */
int display_usage() {
	printf("Usage: quiz [-#] [<answer>]\n");
	printf("Try 'quiz --help' for more information\n");
	return EXIT_FAILURE;
}

/* display_help
 *
 * Prints a detailed help guide of how to interact with quiz
 */
int display_help(){
	printf("Usage: quiz [-#] [<answer>]...\n"
		"A interactive test of Linux, C, and Git questions.\n\n"
		"  -#			display text of question #\n"	
		"  -# [<answer>]        display feedback of answer to question #\n"
		"  --help     		display this help and exit\n\n"
		"Examples:\n"
		"  quiz -1 		Displays question 1\n"
		"  quiz -1 'answer'  	Provides feedback on whether 'answer' is the correct answer to question 1.\n");
	return EXIT_SUCCESS;
}

/* display_question
 *
 * Prints the question corresponding to the inputted number.
 */
int display_question(int num){
	if(num == 1){
		printf("What command is used to find the working directory in Linux?\n");
	}
	else if(num == 2){
		printf("What parameter is the number of command line arguments called?\n");
	}
	else{
		printf("True or False. The commit message is optional.\n");
	}

	return EXIT_SUCCESS;	
}

/* check_answer
 *
 * Checks if the inputted answer is the correct answer to the corresponding question number.                               
 */
int check_answer(int num, char* answer){
	if(num == 1 && strcmp(answer, "pwd") != 0){
                printf("Wrong! The correct answer is 'pwd'.\n");
        }
        else if(num == 2 && strcmp(answer, "argc") != 0){
                printf("Wrong! The correct answer is 'argc'\n");
        }
        else if(num == 2 && strcmp(answer, "False") != 0){
                printf("Wrong! The correct answer is 'False'.\n");
        }
	else{
		printf("Correct! Good job.\n");
	}

        return EXIT_SUCCESS;
}

int main(int argc, char *argv[]) {
	if(argc == 1){
		display_usage();
	}
	
	else if(strcmp(argv[1], "--help")==0){
		display_help();
	}

	else if(argv[1][0] == '-' && (argv[1][1] == '1'|argv[1][1] == '2'|argv[1][1] == '3')){
                int question_num = argv[1][1] - '0'; // converting num to int
		if(argc == 2){
			display_question(question_num);
		}
		else{
			check_answer(question_num, argv[2]);
		}
        }

	else{
		display_usage();
	}
	
	return EXIT_SUCCESS;
}
