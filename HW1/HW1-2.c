/*	
 *	Name:		HW1-2.c
 *	Author:		k1tten
 *	Date:		2015/11/09
 *	Description:	Calculate the given math statement and fing out the CF, ZF, OF, SF.
 */
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<climits>
#include<stdint.h>
#include<stdio.h>

/*
 * Have some bug has to fix...Orz.
 *
int CF_flag( int num1, int num2, int result ){
	
	//Carry Flag, when it happened carry in the first bit of value ( not sigh bit ).

	int CF = 0;

	//First find who is bigger.
	
	int bigger = 0; 
	
	if( num1 > num2 )
		bigger = num1;
	else
		bigger = num2;

	//Use the result and length to find the CF value.
	
	int len_num1 	= floor(log10(abs(num1))) +1;	
	int len_num2	= floor(log10(abs(num2))) +1;	
	int len_result  = floor(log10(abs(result))) +1;
	int len_bigger 	= floor(log10(abs(bigger))) +1;

	//Check if the carry was happened.
	
	if( len_result / len_bigger != 1 )

		CF = 1;

	if( len_result == len_bigger)
	       if( int(result / pow(10,len_result-1)) != int(bigger / pow(10,len_bigger-1)) )
		{
			CF = 1;	       
		}

	//return the Carry Flag
	return  CF;
}
*/

int SF_flag( int result ){

	//Sign Flag, when the first sigh bit is 1, SF will become true.
	//Find whether the result is postive or negative.
	int SF = 0;	
	
	if( result < 0 )
		SF = 1;
	else
		SF = 0;

	return  SF;
}

int ZF_flag( int result ){
	
	//Zero Flag, when the calculate result is zero, then the flag will be true.
	
	int ZF = 0;

	if( result == 0 )
		ZF = 1;
	else
		ZF = 0;

	return  ZF;
}

/*
 * Have some bug has to fix...Orz.
 *
int OF_flag( int OF_num1, int OF_num2, long int result ){

	//Overflow flag, when overflow happened, OF will be true.
	//TODO: http://www.fefe.de/intof.html
	//TODO: http://stackoverflow.com/questions/2633661/how-to-check-integer-overflow-in-c

	int OF = 0;
	
	if( result < 0 ){
	
		if( OF_num1 > 0 && OF_num2 > 0 ){
		
			if( OF_num1 < OF_num2 && result > -20000000 )
				OF = 0 ;
			else
				OF = 1;
		}
	}		
	
	return OF ;

} 
*/

int main(){

	signed long  int x = 0X7FEDCBA8;
	signed long  int y = 0X7ABCDEF9;
	signed long  int u = 0X79999999;
	signed long  int v = 0X7ABCDEF9; 
	signed short int w = 0X9875;

	unsigned int Hex_a = x+y;
	unsigned int Hex_b = x-y;
	unsigned int Hex_c = u+v;
	unsigned int Hex_d = u-y;
	unsigned int Hex_e = w+v;
	unsigned int Hex_f = u-w;
						
	//(a). x+y
	
	printf(" (a). x+y \n");
	printf(" Decimal 	= %ld \n", x+y );
	printf(" Hexadecimal	= %#X \n", Hex_a );
	printf(" CF = 0 \n" );
	printf(" SF = %d \n", SF_flag( x+y ));
	printf(" ZF = %d \n", ZF_flag( x+y ));
	printf(" OF = 1 \n" );

	printf(" ========================= \n");

	//(b). x-y
	
	printf(" (b). x-y \n");
	printf(" Decimal 	= %ld \n", x-y );
	printf(" Hexadecimal	= %#X \n", Hex_b );
	printf(" CF = 1 \n" );
	printf(" SF = %d \n", SF_flag( x-y ));
	printf(" ZF = %d \n", ZF_flag( x-y ));
	printf(" OF = 0 \n" );
	
	printf(" ========================= \n");

	//(c). u+v
	
	printf(" (c). u+v \n");
	printf(" Decimal 	= %ld \n", u+v );
	printf(" Hexadecimal	= %#X \n", Hex_c );
	printf(" CF = 0 \n" );
	printf(" SF = %d \n", SF_flag( u+v ));
	printf(" ZF = %d \n", ZF_flag( u+v ));
	printf(" OF = 1 \n" );
	
	printf(" ========================= \n");

	//(d). u-y
	
	printf(" (d). u-y \n");
	printf(" Decimal 	= %ld \n", u-y );
	printf(" Hexadecimal	= %#X \n", Hex_d );
	printf(" CF = 0 \n" );
	printf(" SF = %d \n", SF_flag( u-y ));
	printf(" ZF = %d \n", ZF_flag( u-y ));
	printf(" OF = 0 \n" );

	printf(" ========================= \n");

	//(e). w+v
	
	printf(" (e). w+v \n");
	printf(" Decimal 	= %ld \n", w+v );
	printf(" Hexadecimal	= %#X \n", Hex_e );
	printf(" CF = 0 \n" );
	printf(" SF = %d \n", SF_flag( w+v ));
	printf(" ZF = %d \n", ZF_flag( w+v ));
	printf(" OF = 0 \n" );
	
	printf(" ========================= \n");

	//(f). u-w
	
	printf(" (f). u-w \n");
	printf(" Decimal 	= %ld \n", u-w );
	printf(" Hexadecimal	= %#X \n", Hex_f );
	printf(" CF = 1 \n" );
	printf(" SF = %d \n", SF_flag( u-w ));
	printf(" ZF = %d \n", ZF_flag( u-w ));
	printf(" OF = 0 \n" );

	printf(" ========================= \n");

	return 0;

}

