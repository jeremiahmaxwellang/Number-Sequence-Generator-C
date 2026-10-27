#include <stdio.h>

/*    
Description:      Displays the Main Menu 
Last modified:    Oct 27, 2026 
Version:          0.0.1
[Acknowledgements: <list of sites or borrowed libraries and sources>] 
*/

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
    }

    return 0;
}
