#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_STR_LEN 16

char* get_input_str(){

	int c;
	int i = 0;
	char* str = (char*)malloc(sizeof(char)*MAX_STR_LEN);

	while( i<MAX_STR_LEN && (c = getc(stdin)) != '\n' ){
		
		str[i++] = c;
	}

	str[i] = 0;
	return str;
}

int main(){

	char* str;
	char istr[MAX_STR_LEN] = {};
	
	str = get_input_str();
	
	int StrSize = strlen(str);
	int i = 0;
	int count = 0;
	char buf = 0;

	strcpy(istr,str);

	char sign = istr[1];
	
	switch(sign){
	
		case 'b':
			 for(i = StrSize - 1; i > 1; i--){
				
				buf += (istr[i] - '0') * pow(2,count);
	       			count++;			
			 }
			 break;
		case 'x':
			 for(i = StrSize - 1; i > 1; i--){

				 buf += (istr[i] - '0') * pow(16,count);
				 count++;												                  }
			 break;
		case 'q':
			 for(i = StrSize - 1; i > 1; i--){

				 buf += (istr[i] - '0') * pow(8,count);
				 count++;
			 }
			 break;
	}

	int StBinary[8] = {};

	for(i = 0; i < 8; ++i){

		StBinary[i] = ( ( buf >> i ) & 1 );
	}

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


	return 0;	
}
