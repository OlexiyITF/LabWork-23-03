#include <iostream>
#include "points.h"
#include <iomanip>

Cpoint <int> read_point();

int main()
{
	/*Введіть з клавіатури точки A, B, C (координати задані цілим числами),
	* що є вершинами деякого трикутрина. Обчисліть і надрукуйте
	* периметр і площу цього трикутника	*/
	CPoint <int> A = read_point();
	CPoint <int> B = read_point();
	CPoint <int> C = read_point();
	std::cout << " A=" << std::showpoint << A << '\n' << "B =" << B << '\n';
	int a = A.distance(B);
	int a = A.distance(C);
	int a = A.distance(A);
	int P = a + b + c;
	double p = P * 0.5;
	double S = sqrt(p * (p - a) * (p - b * (p - c)));
	std::cout << "P = "  << 

}