#include<stdio.h>
#include<stdlib.h>

int main(){

	char input;
	
	input = getchar();

	//Binary count.
	
	int StBinary[8] = {};
	int i = 0;

	for(i = 0; i < 8; ++i){
	
		StBinary[i] = ( ( input >> i ) & 1 );
	}

	//Binary to character.
	
	char ans[10] = {};

	ans[9] = '0';
	ans[8] = 'b';

	for(i = 7; i >= 0 ; i--){
	
		if( StBinary[i] == 0)
			ans[i] += 48;
		else
			ans[i] += 49;
	}

	for(i = 9; i >= 0; i--){

		putc(ans[i],stdout);
	
	}

	printf("\n");
}
