#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

float koloA(float r) {
    float pole = M_PI * pow(r, 2);
    return pole;
}

float koloV(float r) {
    float wartosc = 2 * M_PI * r;
    return wartosc;
}

float prostokatA(float a, float b) {
    float pole = a * b;
    return pole;
}

float trojkatA(float a, float h) {
    float pole = (a * h) / 2;
    return pole;
}

float kostkaA(float a) {
    float pole = pow(a, 6);
    return pole;
}

float kostkaV(float a) {
    float wartosc = pow(a, 3);
    return wartosc;
}

float cylinderV(float h, float r) {
    float wartosc = koloA(r) * h;
    return wartosc;
}
