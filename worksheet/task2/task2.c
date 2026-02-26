/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Ahmed Sharkasi
 * ID: 201826539
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	// take the hexadecimal input from the user
	printf("Enter a hexadecimal:");
	for (int i=0; i<8; i++){ 
		scanf("%c", &hex[i]);    // read each characters one at a time
		if (hex[i] == '\n') {
			hex[i] = '\0';  // if user clicks enter terminate and break the reading loop
			break;
		}
	}
	
	// Convert hexadecimal to decimal
	int len = strlen(hex);  //retreive length of the input string 
	for (int i = 0; i < len; i++) { // loop through each character in the input
									// and identify what it is to do the necessary conversion
		char c = hex[i]; // current cahracter is stored in c to be manipulated
		int digit;
		if (c >= '0' && c <= '9') {
			digit = c - '0'; // if number then number = number -  0
		} else if (c >= 'A' && c <= 'F') {
			digit = c - 'A' + 10; // if uppercase letter then number = letter - A + 10 to get the correct value
		} else if (c >= 'a' && c <= 'f') {
			digit = c - 'a' + 10; // same as aboive but for lowercase
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 1; // if character isnt a hex digit then print error
		}
		decimal = decimal * 16 + digit; // multiply the current decimal value by 16 and add the new digit to it to get the new decimal value to get the denary value
		
	}
	
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	

	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}