#include<stdio.h>

int main(){

	char input;
	
	scanf("%c", &input);

	if( input >= 'A' && input <= 'Z' )
	{
		input += 32;
	}

	printf("%c", input);

	return 0;
}
