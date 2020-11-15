/*This is the interface for the point data type.*/
#include <stdbool.h>
typedef struct { float x; float y; } point;
float distance(point a, point b);
int slope(point a, point b);
bool collinearity(point a, point b, point c);