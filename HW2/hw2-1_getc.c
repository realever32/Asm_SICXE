#include<stdio.h>

int main(){

	char input = getc(stdin);

	if( input <= 'Z' && input >= 'A')
	{
		input += 32;
	}

	printf("%c", input);

	return 0;

}
