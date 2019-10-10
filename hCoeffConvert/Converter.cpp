#include <iostream>



void h_and_y_swap(double coef[2][2]){
	double k11 = coef[0][0];
	double k12 = coef[0][1];
	double k21 = coef[1][0];
	double k22 = coef[1][1];
	coef[0][0] = 1 / k11;
	coef[0][1] = -k12 / k11;
	coef[1][0] = k21 / k11;
	coef[1][1] = ((k11 * k22) - (k21 * k12)) / k11;
	std::cout << coef<< std::endl;
}

void convert(double coef[2][2], double allcoef[3][3], int n) {
	h_and_y_swap(coef);
	double y11 = coef[0][0];
	double y12 = coef[0][1];
	double y21 = coef[1][0];
	double y22 = coef[1][1];
	if (n == 1)
	{
		allcoef[0][0] = y11 + y12 + y21 + y22;
		allcoef[0][1] = -y21 - y11;
		allcoef[0][2] = -y12 - y22;
		allcoef[1][0] = -y11 - y12;
		allcoef[1][1] = y11;
		allcoef[1][2] = y12;
		allcoef[2][0] = -y21 - y22;
		allcoef[2][1] = y21;
		allcoef[2][2] = y22;
	}
	else if (n ==2)
	{
		allcoef[0][0] = y11;
		allcoef[0][1] = -y12 - y11;
		allcoef[0][2] = y12;
		allcoef[1][0] = -y11 - y21;
		allcoef[1][1] = y11 + y12 + y21 + y22;
		allcoef[1][2] = -y12 - y22;
		allcoef[2][0] = y21;
		allcoef[2][1] = -y21 - y22;
		allcoef[2][2] = y22;
	}
	else if (n == 3)
	{
		allcoef[0][0] = y11;
		allcoef[0][1] = y12;
		allcoef[0][2] = -y11 - y12;
		allcoef[1][0] = y21;
		allcoef[1][1] = y22;
		allcoef[1][2] = -y21 - y22;
		allcoef[2][0] = -y11 - y21;
		allcoef[2][1] = -y12 - y22;
		allcoef[2][2] = y11 + y12 + y21 + y22;
	}
	std::cout << allcoef << std::endl;
}
