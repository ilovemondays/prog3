/*
 ============================================================================
 Name        : StrukturAufgabe03_06.c
 Author      : 
 Version     :
 Copyright   : Sharing and modifying is not allowed...
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "StrukturAufgabe03_06.h"


int20 create20(char val[]) {
	int20 neu;
	int i=0;
	int valLength;

	for(;;) {
		i++;
		if(val[i]=='\0') {
			valLength = i;
			break;
		}
	}

	int l=valLength-1;

	for(i=19; i>=0; i--) {
		if(l >= 0) {
			neu.zahl[i] = val[l];
			l--;
		} else {
			neu.zahl[i] = '0';
		}
	}

	return neu;
}

void print20(int20 zuDrucken) {
	int i=0;
	int ungleichNullCount = 0;

	for(;i<LAENGE; i++) {

		if( zuDrucken.zahl[i] - '0' > 0 )
			ungleichNullCount++;

		if(ungleichNullCount == 0)
			continue;

		printf("%c", zuDrucken.zahl[i]);
	}

	printf("\n");
}

int20 add20(int20 a, int20 b) {

	int i=LAENGE-1;
	int20 sum = a;
	int ueber = 0;
	int aZiffer;
	int bZiffer;

	for(; i>=0; i--) {
		aZiffer = (a.zahl[i] - '0') + (b.zahl[i] - '0') + ueber;
		if( aZiffer >= 10 ) {
			ueber = 1;
		} else {
			ueber = 0;
		}

		// sum.zahl[i] = (char)(aZiffer%10);
		if( aZiffer%10 == 0 ) {
			sum.zahl[i] = '0';
		} else {
			sum.zahl[i] = '0'+(aZiffer%10);
		}
	}

	return sum;
}

int main(void) {

	 int20 a= create20("9700");
	 int20 b= create20("422");
	 int20 sum= add20(a, b);
	 print20(a); printf("\n");
	 print20(b); printf("\n");
	 print20(sum); printf("\n");


	return EXIT_SUCCESS;
}
