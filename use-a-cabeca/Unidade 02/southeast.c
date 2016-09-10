/*
 * southeast.c
 *
 *  Created on: Sep 5, 2016
 *      Author: leonardofiedler
 */

#include <stdio.h>

void go_sout_east(int *lat, int *lon) {
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int main()
{
	int latitude = 32;
	int longitude = -64;

	go_sout_east(&latitude, &longitude);
	printf("Avast! Now At: [%i, %i]\n",latitude, longitude);
	return 0;
}

