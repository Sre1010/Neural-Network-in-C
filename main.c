/*
* 
* This program runs a neural network created in C from scratch.
* 
*/


#include <stdio.h>
#include "image/image.h"


int main(int argc, int *argv[]) {
	
	printf("Hello World!");

	Image* images = malloc(3 * sizeof(Image));

	char* image_data = read_image("Apple.jpg");


	// printf("This is test: %s", test);
	
	return 0;
}
