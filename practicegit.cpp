#include <iostream>
int max3(int a, int b, int c);
int max2(int a, int b, int c);
int min3(int a, int b, int c);

int main(void)
{
	int x, y, z= 0;
	std::cout << "papi dame 3 enteros ahi de bien y yo te los doy en orden decreciente ya" << std::endl;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	std::cout << max3(x, y, z) << ", " << max2(x, y, z) << ", " << min3(x, y, z) << std::endl;
	std::cout <<"Papi tu maldita madre"<<std::endl;
    return 0;
}
int max3(int a,int b, int c)
{
	if (a >= b) {
		if (a >= c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		if (b >= c) {
			return b;
		}
		else {
			return c;
		}
	}
}
int max2(int a, int b, int c)
{
	if (a >= b) {
		if (a >= c) {
			if (c >= b) {
				return c;
			}
			else {
				return b;
			}
		}
		else {
			return a;
		}
	}
	else {
		if (b >= c) {
			if (a >= c) {
				return a;
			}
			else {
				return c;
			}
		}
		else {
			return b;
		}
	}
}
int min3(int a, int b, int c)
{
	if (a <=b) {
		if (a <= c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		if (b <= c) {
			return b;
		}
		else {