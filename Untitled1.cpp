#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double x, y, z;
	x = 0;
	y = 4;
	for (int x = 0; x <= 10; x++) {
		for (int y = 4; y <= 6; y++) {
			z = (sqrt(x * y) + 8) / pow(x, 2 * y);
			cout << "If x = " << x << " and y = " << y << ", than z = " << z << "\n\n";
			y += 1;
			x += 0.2;
		}
	}
	return 0;
}
