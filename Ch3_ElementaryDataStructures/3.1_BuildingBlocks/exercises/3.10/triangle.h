#include <math.h>

typedef struct
{
	float x;
	float y;
} point;

typedef struct
{
	point a;
	point b;
	point c;
} triangle;

float area(triangle t);
float randNum();