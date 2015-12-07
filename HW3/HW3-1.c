#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

	char input;
	
	input = getchar();

	//Binary count and output.
	
	int StBinary[8] = {};
	int i = 0;

	for(i = 0; i < 8; ++i){
	
		StBinary[i] = ( ( input >> i ) & 1 );
	}

	printf("0b");

	for(i = 7; i >= 0; --i){
	
		printf("%d", StBinary[i]);
	}

	printf("\n");

	//Octal count and output.
	
	int StOctal[3] = {};

	 for(i = 0; i < 8; i++){
		
		StOctal[i/3] += ( StBinary[i] * pow(2,i%3) );	 	
	 }

	 printf("0q");

	 for(i = 2; i >= 0; i--){
	 
		 printf("%d", StOctal[i]);
	 	 
	 }

	 printf("\n");

	 //Hexadecimal count and output.
	
	 int StHex[2] = {};

	 for(i = 0; i < 8;i++){
		
	 	StHex[i/4] += ( StBinary[i] * pow(2,i%4) );
	 
	 }	

	 printf("0x");

	 for(i = 1; i>=0; i--){
		 
		 if( StHex[i] >= 10 ){
		 
			switch( StHex[i] ){
			
				case 10: printf("A");
					 break;
				case 11: printf("B");
					 break;
				case 12: printf("C");
					 break;
				case 13: printf("D");
					 break;
				case 14: printf("E");
					 break;
				case 15: printf("F");
					 break;
			}
		 }
		 else
			 printf("%d", StHex[i]);
		 
	 }
	 
}
