#include <stdio.h>

/*    
Description:      Displays the Main Menu 
Last modified:    Oct 28, 2026 
Version:          0.1.0
[Acknowledgements: <list of sites or borrowed libraries and sources>] 
*/

/*
Inputs: the first 4 numbers in a series
Output: the program guesses what is the type of number sequence and the 5th number
*/
void displayOption1() {
	int nNum1 = 0, nNum2 = 0, nNum3 = 0, nNum4 = 0;
	
	printf("\nGuess the Pattern\n");
	
	printf("Input 4 numbers (separate each number with a space)\nExample: 1 2 3 4\n\n");
	printf(">> ");
	scanf("%d %d %d %d", &nNum1, &nNum2, &nNum3, &nNum4);
	
	printf("Sequence: %d %d %d %d\n", nNum1, nNum2, nNum3, nNum4);
	
	// 1-2. Increments/Decrements of N
	int nDiff1 = nNum2 - nNum1;
	int nDiff2 = nNum3 - nNum2;
	int nDiff3 = nNum4 - nNum3;
	
	// If the differences of the numbers are equal
	if(nDiff1 == nDiff2 && nDiff2 == nDiff3){
		
		// If the difference is positive
		if(nDiff1 > 0){
			printf("5th Number: %d\n", nNum4 + nDiff1);
			printf("Reason:\nIncrements of %d\n", nDiff1);
		}
		
		else if(nDiff1 < 0){
			printf("5th Number: %d\n", nDiff1 - nNum4);
			printf("Reason:\nDecrements of %d\n", nDiff1*-1);
		}
		
		// TODO: Even/odd series (if all diff == 2 && all nums %2 == 0)
		if(nDiff1 == 2) {
			if(nNum1 % 2 == 0 && nNum2 % 2 == 0 && nNum3 % 2 == 0 && nNum4 % 2 == 0){
			printf("Even Series\n");
		}
			else printf("Odd Series\n");
		}
		
		
	}
	
	printf("\n");
}

void displayMainMenu() {

    printf("[1] Guess the Pattern \n");
    printf("[2] Generate n numbers in a series \n");
    printf("[3] Exit\n\n");
    
    printf(">> ");

}

int main() {
    int nInput = 0;

    // Main Menu
    while(nInput != 3) {
        displayMainMenu();
        scanf("%d", &nInput);
        
        switch(nInput) {
        	// TODO: Make sure user stays on option 1 after inputting a sequence
        	case 1:
        		displayOption1();
        		break;
    		case 2:
    			break;
    			
		}
    }

    return 0;
}
