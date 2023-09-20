#include "movefuncs.h"


// Rotate an object back and forth on an axis a given number of degrees.
void
bfRotate(float rTime, float degrees, float xAxis, float yAxis, float zAxis)
{
	float relTime;
	if (rTime < .25f)
	{
		relTime = rTime;
		glRotatef((-degrees * relTime / .25f), xAxis, yAxis, zAxis);
	}
	else if (rTime < .5f)
	{
		relTime = rTime - .25f;
		glRotatef((-degrees + degrees * relTime / .25f), xAxis, yAxis, zAxis);
	}
	else if (rTime < .75f)
	{
		relTime = rTime - .5f;
		glRotatef((degrees * relTime / .25f), xAxis, yAxis, zAxis);
	}
	else
	{
		relTime = rTime - .75f;
		glRotatef((degrees - degrees * relTime / .25f), xAxis, yAxis, zAxis);
	}
}

// Rotate an object a number of times in one direction, then that many times again in the opposite direction.
void	bfRotateCount(float rTime, float rotations, float xAxis, float yAxis, float zAxis)
{
	float relTime;
	float degrees = 360.f * rotations;
	if (rTime < .25f)
	{
		relTime = rTime;
		glRotatef((-degrees * relTime / .25f), xAxis, yAxis, zAxis);
	}
	else if (rTime < .5f)
	{
		relTime = rTime - .25f;
		glRotatef((-degrees + degrees * relTime / .25f), xAxis, yAxis, zAxis);
	}
	else if (rTime < .75f)
	{
		relTime = rTime - .5f;
		glRotatef((degrees * relTime / .25f), xAxis, yAxis, zAxis);
	}
	else
	{
		relTime = rTime - .75f;
		glRotatef((degrees - degrees * relTime / .25f), xAxis, yAxis, zAxis);
	}
}

// Move an object a certain distance in either direction, then move it back to its start point.
void	bfTranslate(float rTime, float xMoves, float yMoves, float zMoves)
{
	float relTime;
	if (rTime < .25f)
	{
		relTime = rTime;
		glTranslatef(xMoves * relTime / .25f, yMoves * relTime / .25f, zMoves * relTime / .25f);
	}
	else if (rTime < .5f)
	{
		relTime = rTime - .25f;
		glTranslatef(xMoves - xMoves * relTime / .25f, yMoves - yMoves * relTime / .25f, zMoves - zMoves * relTime / .25f);
	}
	else if (rTime < .75f)
	{
		relTime = rTime - .5f;
		glTranslatef(-xMoves * relTime / .25f, -yMoves * relTime / .25f, -zMoves * relTime / .25f);
	}
	else
	{
		relTime = rTime - .75f;
		glTranslatef(-xMoves + xMoves * relTime / .25f, -yMoves + yMoves * relTime / .25f, -zMoves + zMoves * relTime / .25f);
	}
}
