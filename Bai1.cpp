#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() {
	double x, b, c, A;
	x = -1.5172;
	b = pow(2, x) + pow(x, 5) - 31.769;
	c = (log(pow(x, 4) + pow(5, x)) / log(7)) +(log(pow(x, 2) + pow(5, b)) / log(exp(1)));
	A = (pow(x, 3) + sin(b) - exp(0.19238)) / (5 + exp(b) + pow(c , 0.202345 + x));
	printf("Ket qua: %.5f", A);
	printf("anh đi tìm");
	printf("em cung d tim");
}
