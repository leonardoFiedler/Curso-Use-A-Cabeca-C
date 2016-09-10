/*
 * jogo_namoro.c
 *
 *  Created on: Sep 9, 2016
 *      Author: leonardofiedler
 */
#include <stdio.h>
int main()
{
	int contestants[] = {1, 2, 3};
	int *choice = contestants;
	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice; //O Ponteiro está apontando para a primeira posição, logo ele obterá o valor de contestants[0]

	//Printa o valor das variáveis
	printf("Position 0 : %i\n", contestants[0]);
	printf("Position 1 : %i\n", contestants[1]);
	printf("Position 2 : %i\n", contestants[2]);
	printf("*choice : %i\n", *choice);

	//printa quem pegou
	printf("I'm going to pick contestant number %i\n", contestants[2]);

	return 0;
}
