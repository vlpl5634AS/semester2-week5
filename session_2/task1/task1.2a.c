//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
	 
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here
        while(1){
            printf("Enter password: ");
            scanf("%s", password);
            if(strcmp(password, "secure123") == 0){
                printf("Password is correct!\n");
                break;
            } else {
                printf("Incorrect password, try again.\n");
            }
        }
    return 0;
}