#include <stdio.h>

int main(){
	
	char str[100];
	char* ptr = str;
	printf("Enter a string: ");
    gets(ptr);

    printf("You entered: %s\n", str);
	return 0;

}