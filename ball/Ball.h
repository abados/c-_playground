#pragma once
class Ball
{
public:
	/// <summary>
	///  Properties
	/// </summary>
	
	int elastic;
	int springy;
	int airAmount;


	/// <summary>
	/// Actions
	/// </summary>
	
	void inflate_a_ball(int inflate_time);
	Ball(int elastic, int springy, int airAmount);
	
};

