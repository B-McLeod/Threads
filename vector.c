#include "vector.h"

typedef struct dynamic_vector
{
    int* data;
    size_t limit; // Total size of the vector
    size_t current; //Number of vectors in it at present
} vectorv;