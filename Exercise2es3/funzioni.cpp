#pragma once
#include <iostream>
#include "Eigen/Eigen"

using namespace std;
using namespace Eigen;

int solve_PALU(const Matrix2d &A, const Vector2d &b, const Vector2d &x, double &err_PALU)
{
	Vector2d solPALU = A.fullPivLu().solve(b);					
	err_PALU = (solPALU- x).norm()/solPALU.norm();
	
	return 0;				
}					

int solve_QR(const Matrix2d &A, const Vector2d &b, const Vector2d &x, double &err_QR)
{
	Vector2d solQR = A.colPivHouseholderQr().solve(b);					
	err_QR = (solQR- x).norm()/solQR.norm();
	
	return 0;				
}