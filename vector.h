#include <iostream>
#include <math.h>

class vector
{
private:
	float x;
	float y;
	float z;
	float summ_vector;

public:
	vector(float new_x, float new_y, float new_z) : x(new_x), y(new_y), z(new_z)
	{
		summ_vector = 0;
	}

	void calculate_summ_vector()
	{
		summ_vector = abs (sqrtf(pow(x, 2) + pow(y, 2) + pow(z, 2)));
	}

	float get_summ_vector()
	{
		return summ_vector;
	}

	float get_x()
	{
		return x;
	}
	float get_y()
	{
		return y;
	}
	float get_z()
	{
		return z;
	}

};

