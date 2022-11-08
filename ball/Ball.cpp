#include "Ball.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

Ball::Ball(int elasticIt, int springyIt, int airAmountIt)
{
	elastic = elasticIt;
	springy = springyIt;
	airAmount = airAmountIt;
	
}

void Ball::inflate_a_ball(int minutes)
{
	airAmount += minutes;
}

