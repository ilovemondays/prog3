/*
 * StrukturAufgabe03_06.h
 *
 *  Created on: 19.10.2017
 *      Author: 2d6-znu-u1
 */

#ifndef STRUKTURAUFGABE03_06_H_
#define STRUKTURAUFGABE03_06_H_

#define LAENGE 20

typedef struct {
	char zahl[LAENGE];
} int20;

extern int20 create20(char[]);
extern void print20(int20);
extern int20 add20(int20, int20);

#endif /* STRUKTURAUFGABE03_06_H_ */
