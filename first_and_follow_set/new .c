#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int *FirstSetOfS(char gram[3][5][3]);
int *FirstSetOfA(char gram[3][5][3]);
int *FirstSetOfB(char gram[3][5][3]);

int main(){
	
	char grammer[3][5][3] = {{"S",">","abd","|","Ba"},{"A",">","cdf"},{"B",">","elk"}};
	int *s;
	int *a;
	int *b;
	char fos[10] = {'\0'};
	char foa[10] = {'\0'};
	char fob[10] = {'\0'};
	s = FirstSetOfS(grammer);
	a = FirstSetOfA(grammer);
	b = FirstSetOfB(grammer);
	
	for (int i = 0; i < 10; i++){
		fos[i] = *(s + i);
		foa[i] = *(a + i);
		fob[i] = *(b + i);
		printf("%c",fob[i]);
	}
	
	return 0;
}

int *FirstSetOfS(char gram[3][5][3]){
	
	char S[10] = {'\0'};
	static int S1[10] = {'\0'};

	int counter = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			for(int k = 0; k < 3; k++){
				if(gram[i][j][k] != '\0'){
					if(i == 0){
						S[counter] = gram[i][j][0];
						counter++;
						k = 3;
					}
				}
			}
		}
	}
	
	counter = 0;
	
	for(int y = 0; y < 10; y++){
		if(S[y] != 'S' && S[y] != '>' && S[y] != '|' && S[y] != '\0'){
			S1[counter] = (int)S[y];
			counter++;
		}
	}
	
	return S1;
}

int *FirstSetOfA(char gram[3][5][3]){
	
	char A[10] = {'\0'};
	static int A1[10] = {'\0'};

	int counter = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			for(int k = 0; k < 3; k++){
				if(gram[i][j][k] != '\0'){
					if(i == 1){
						A[counter] = gram[i][j][0];
						counter++;
						k = 3;
					}
				}
			}
		}
	}
	
	counter = 0;
	
	for(int y = 0; y < 10; y++){
		if(A[y] != 'A' && A[y] != '>' && A[y] != '|' && A[y] != '\0'){
			A1[counter] = (int)A[y];
			counter++;
		}
	}
	
	return A1;
}

int *FirstSetOfB(char gram[3][5][3]){
	
	char B[10] = {'\0'};
	static int B1[10] = {'\0'};

	int counter = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			for(int k = 0; k < 3; k++){
				if(gram[i][j][k] != '\0'){
					if(i == 2){
						B[counter] = gram[i][j][0];
						counter++;
						k = 3;
					}
				}
			}
		}
	}
	
	counter = 0;
	
	for(int y = 0; y < 10; y++){
		if(B[y] != 'B' && B[y] != '>' && B[y] != '|' && B[y] != '\0'){
			B1[counter] = (int)B[y];
			counter++;
		}
	}
	
	return B1;
}