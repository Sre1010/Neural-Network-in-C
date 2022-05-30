#ifndef IMAGE_H
#define IMAGE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char* image_data;
	long image_size;
}Image;

char* read_image(char* file_name);

#endif
