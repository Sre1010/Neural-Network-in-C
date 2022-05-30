#include "image.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char* read_image(char* file_name) {
	FILE* image = fopen(file_name, "r");

	// Determine the size of the image
	fseek(image, 0, SEEK_END);
	unsigned long image_size = ftell(image);
	printf("image size is %ld\n\n", image_size);
	if (image_size == -1L) {
		perror("ftell()");
		exit(EXIT_FAILURE);
	}
	fseek(image, 0, SEEK_SET);

	// Allocate space for the image data and store that data
	char* image_data = (char*)malloc((image_size) * sizeof(char));
	fread(image_data, sizeof(char), image_size, image);

	fclose(image);

	printf("image size is %ld\n\n", image_size);
	
	/*
	for (int i = 0; i < image_size; i++) {
		printf("%x", data[i]);
	}
	*/
	printf("writing file here...\n");
	FILE* copy = fopen("copy.jpg", "w");
	fwrite(image_data, sizeof(char), image_size, copy);
	fclose(copy);

	printf("finished copying file");

	return image_data;


}
