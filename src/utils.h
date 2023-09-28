#ifndef UTILS_H
#define UTILS_H

#include "vector.h"

float clamp(float d, float min, float max);
void int_swap(int* a, int* b);
void float_swap(float* a, float* b);

vec3_t barycentric_weights(vec2_t a, vec2_t b, vec2_t c, vec2_t p);

#endif