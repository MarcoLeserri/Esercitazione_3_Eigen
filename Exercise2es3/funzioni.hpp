#pragma once
#include <iostream>
#include "Eigen/Eigen"

using namespace std;
using namespace Eigen;

int solve_PALU(const Matrix2d &A, const Vector2d &b, const Vector2d &x, double &err_PALU);

int solve_QR(const Matrix2d &A, const Vector2d &b, const Vector2d &x, double &err_QR);
