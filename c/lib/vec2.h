#ifndef VEC2_H
#define VEC2_H

typedef struct Vec2 {
	double x;
	double y;
} Vec2;

Vec2* vec2_new(double x, double y) {
	Vec2* v = (Vec2*) malloc(sizeof(Vec2));
	v->x = x;
	v->y = y;
	return v;
}

Vec2 vec2_new_i(double x, double y) {
	Vec2 v = { .x = x, .y = y };
	return v;
}

Vec2 vec2_unit() {
	return vec2_new_i(0,0);
}

void vec2_destroy(Vec2* v) {
	free(v);
}

Vec2* vec2_add(Vec2* va, Vec2* vb) {
	va->x += vb->x;
	va->y += vb->y;
	return va;
}

Vec2* vec2_sub(Vec2* va, Vec2* vb) {
        va->x -= vb->x;
        va->y -= vb->y;
        return va;
}

double vec2_dot(Vec2* va, Vec2* vb) {
	return va->x * vb->x + va.y + vb.y;
}

void vec2_print(Vec2* vec2) {
        printf("Vec2 -> x: %d, y: %d\n", vec2->x, vec2->y);
}

#endif

