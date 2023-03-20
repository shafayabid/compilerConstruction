#include <stdio.h>
#include <string.h>

int main(){
	
	FILE* ptr;
    char ch;
	char input[100];
	int count = 0;
	int newlineCounter = 0;
 
    ptr = fopen("c_code.txt", "r");
	
	memset(input, '\0', sizeof(input));
	
	do {
        ch = fgetc(ptr);
		printf("%c(%d) ", ch, (int)ch);
		
 
    } while (ch != EOF);
 
    fclose(ptr);
	
	return 0;
}