/* Jeslyn Lu, lu196, October 3rd, 2024
 *
 * Quiz allows user to answer three quiz questions.
 */

#include <stdio.h>
#include <stdlib.h>

/* display_usage
 *
 * Prints the brief usage details of quiz
 */
void display_usage() {
	printf("Usage: quiz [-#] [<answer>]\n");
	printf("Try 'quiz --help' for more information");
	return EXIT_FAILURE;
}

/* display_help
 *
 * Prints a detailed help guide of how to interact with quiz
 */
void display_help(){
	printf("Usage: quiz [-#] [<answer>]...\n"
		"A interactive test of Linux, C, and Git questions.\n\n"
		"With no FILE, or when FILE is -, read standard input.\n\n"
		"  -#			display text of question #\n"	
		"  -# [<answer>]        display feedback of answer to question #\n"
		"  --help     		display this help and exit\n\n"
		"Examples:\n"
		"  quiz -1 		Displays question 1\n"
		"  quiz -1 'answer'  	Provides feedback on whether 'answer' is the correct answer to question 1.\n");
	return EXIT_SUCCESS;
}

//void check_answer(

int main(nt argc, char *argv[]) {
	if(argc == 1){
		display_usage();
	}
	
	else if(strcmp(argv[1], "--help")){
		display_help();
	}

//	char question_num[10]
//	while(true){
//
//		int result = scanf("%s", question_num);
//		if(result == 0){
//			fprintf(stderr, "Incorrect Value\n");
//			display_usage();
//		}
	
	puts("Hello, World!");
	return EXIT_SUCCESS;
}
