#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define _USE_MATH_DEFINES
#include <math.h>

#ifdef WIN32
#include <windows.h>
#pragma warning(disable:4996)
#endif

#include "glew.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "glut.h"

float*
Array3(float a, float b, float c);

float*
MulArray3(float factor, float array0[3]);

void
SetMaterial(float r, float g, float b, float shininess);

void
SetPointLight(int ilight, float x, float y, float z, float r, float g, float b);
void
SetSpotLight(int ilight, float x, float y, float z, float xdir, float ydir, float zdir, float r, float g, float b);

void
SetPointLightDim(int ilight, float x, float y, float z, float r, float g, float b);