#include <iostream>
#include "Eigen/Eigen"
#include "funzioni.hpp"
#include "funzioni.cpp"
using namespace std;
using namespace Eigen;



int main()
{
	Vector2d x;
	x << -1.0e+0, -1.0e+00;
	
	Matrix2d A1;
	A1 << 5.547001962252291e-01, -3.770900990025203e-02, 8.320502943378437e-01,-9.992887623566787e-01;
	Vector2d b1;
	b1 << -5.169911863249772e-01, 1.672384680188350e-01;
	
	Matrix2d A2;
	A2 << 5.547001962252291e-01, -5.540607316466765e-01, 8.320502943378437e-01,-8.324762492991313e-01;
	Vector2d b2;
	b2 << -6.394645785530173e-04, 4.259549612877223e-04;
	
	Matrix2d A3;
	A3 << 5.547001962252291e-01, -5.547001955851905e-01, 8.320502943378437e-01, -8.320502947645361e-01;
	Vector2d b3;
	b3 << -6.400391328043042e-10, 4.266924591433963e-10;
	
	double e;
	
	solve_PALU(A1, b1, x, e);
	cout<< "1. l'errore relativo risolto con PALU è: "<< e<< endl;
	solve_QR(A1, b1, x, e);
	cout<< "1. l'errore relativo risolto con QR è: "<< e<< endl;
	solve_PALU(A2, b2, x, e);
	cout<< "2. l'errore relativo risolto con PALU è: "<< e<< endl;
	solve_QR(A2, b2, x, e);
	cout<< "2. l'errore relativo risolto con QR è: "<< e<< endl;
	solve_PALU(A3, b3, x, e);
	cout<< "3. l'errore relativo risolto con PALU è: "<< e<< endl;
	solve_QR(A3, b3, x, e);
	cout<< "3. l'errore relativo risolto con QR è: "<< e<< endl;
	
    return 0;
}
