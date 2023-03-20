#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int detectKeywords(char str[], int lineNum);

int main(){
	
	FILE* ptr;
    char ch;
	char input[100];
	int count = 0;
	int newlineCounter = 0;
	int kw = 0;
 
    ptr = fopen("c_code.txt", "r");
	
	memset(input, '\0', sizeof(input));
	
	do {
        ch = fgetc(ptr);
        
		if(ch == '\n'){
			newlineCounter++;
		}
		
		if(ch != 32 && ch != 10){
			input[count] = ch;
			count++;
		}
		else{
			//printf("%s : %d \n", input, strlen(input));
			kw = detectKeywords(input,newlineCounter);
			count = 0;
			memset(input, '\0', sizeof(input));
		}
		
 
    } while (ch != EOF);
 
    fclose(ptr);
	
	return 0;
}

int detectKeywords(char str[], int lineNum){

	char keywords1[] = "int";
	char keywords2[] = "void";
	char keywords3[] = "main";
	char keywords4[] = "if";
	char keywords5[] = "else";
	char keywords6[] = "include";
	char keywords7[] = "float";
	char keywords8[] = "char";
	char keywords9[] = "return";
	
	if(strcmp(str, keywords1) == 0){
		printf("%d : <keyword,int> \n", lineNum);
		return 1;
	}else if(strcmp(str, keywords2) == 0){
		printf("%d : <keyword,void> \n", lineNum);
		return 1;
	}else if(strcmp(str, keywords3) == 0){
		printf("%d : <keyword,main> \n", lineNum);
		return 1;
	}else if(strcmp(str, keywords4) == 0){
		printf("%d : <keyword,if> \n", lineNum);
		return 1;
	}else if(strcmp(str, keywords5) == 0){
		printf("%d : <keyword,else> \n", lineNum);
		return 1;
	}else if(strcmp(str, keywords6) == 0){
		printf("%d : <keyword,include> \n", lineNum);
		return 1;
	}else if(strcmp(str, keywords7) == 0){
		printf("%d : <keyword,float> \n", lineNum);
		return 1;
	}else if(strcmp(str, keywords8) == 0){
		printf("%d : <keyword,char> \n", lineNum);
		return 1;
	}else if(strcmp(str, keywords9) == 0){
		printf("%d : <keyword,return> \n", lineNum);
		return 1;
	}else{
		return 0;
	}	
}




