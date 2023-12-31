#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdint.h>
#include "display.h"
#include "texture.h"
#include "vector.h"

typedef struct {
    int a, b, c;
    tex2_t a_uv, b_uv, c_uv;
    uint32_t color;
} face_t;

typedef struct {
    vec2_t points[3];
    tex2_t texcoords[3];
    uint32_t color;
    float avg_depth;
} triangle_t;

void draw_filled_triangle(int x0, int y0, int x1, int y1, int x2, int y2, uint32_t color);

void draw_texel(
    int x, int y, uint32_t* texture,
    vec2_t point_a, vec2_t point_b, vec2_t point_c,
    float u0, float v0, float u1, float v1, float u2, float v2
);

void draw_textured_triangle(
    int x0, int y0, float u0, float v0,
    int x1, int y1, float u1, float v1,
    int x2, int y2, float u2, float v2,
    uint32_t* texture
    );

#endif
