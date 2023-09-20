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

void	bfRotate(float rTime, float degrees, float xAxis, float yAxis, float zAxis);
void	bfRotateCount(float rTime, float rotations, float xAxis, float yAxis, float zAxis);
void	bfTranslate(float rTime, float xMoves, float yMoves, float zMoves);