#include <stdio.h>
#include <stdbool.h>

int detectIdentifiers(char str[]);
int detectDigits(char str[]);
int detectKeywords(char str[]);

int main(){
	
	char str[100] = "";
	gets(str);
	printf("Identifier Found: %d\n", detectIdentifiers(str));
	printf("Digit Found: %d \n", detectDigits(str));
	//printf("Keyword Found: %d", detectKeywords(str));
	return 0;

}

int detectIdentifiers(char str[]){

	char identifiers[52];
	int counter = 0;
	
	for(char i = 'A'; i <= 'z'; i++){
		if(i >= '[' && i <= '`'){
			continue;
		}
		else{
			identifiers[counter] = i;
			counter++;
		}
	}
	
	//for(int i = 0; i < 52; i++){
		//printf("%c", identifiers[i]);
	//}
	
	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 52; j++){
			if(str[i] == identifiers[j]){
				return 1;
			}
		}
	}
	
	return 0;	

}

int detectDigits(char str[]){

	char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	
	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 10; j++){
			if(str[i] == digits[j]){
				return 1;
			}
		}
	}
	
	return 0;	

}

int detectKeywords(char str[]){

	char keywords1[] = "int";
	char keywords2[] = "void";
	char keywords3[] = "main";	
	
	return (int)(sizeof(keywords1) / sizeof(keywords1[0]));

}