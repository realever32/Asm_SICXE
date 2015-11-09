/**
 * 	Name:	  	HW1-1.c
 * 	Author:	 	k1tten
 * 	Date:	  	2015/11/08
 * 	Description:	Find the limitation.
 */

#include<stdio.h>
#include<stdlib.h>
#include<climits>
int main(){

	long int long_32max 		=  LONG_MAX ;
	long int long_32min 		=  LONG_MIN ;
	unsigned long int long_32umax	= ULONG_MAX ;


	printf(" This is 16 bits   signed integer the largest  value: %d  \n", SHRT_MAX );
	printf(" This is 16 bits   signed integer the smallest value: %d  \n", SHRT_MIN );
	printf(" This is 16 bits unsigned integer the largest  value: %u  \n", USHRT_MAX );
	printf(" This is 16 bits unsigned integer the smallest value: 0   \n" );
	printf(" This is 32 bits   signed integer the largest  value: %ld \n", long_32max );
	printf(" This is 32 bits   signed integer the smallest value: %ld \n", long_32min );
	printf(" This is 32 bits unsigned integer the largest  value: %lu \n", long_32umax );
	printf(" This is 32 bits unsigned integer the smallest value: 0   \n" );

	return 0;
				
}
