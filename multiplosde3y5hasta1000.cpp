#include<iostream>
int main(void)
{
	int ii = 1;
	int result = 0;
	while (ii<1000) {
		if (ii % 3 == 0 || ii % 5 == 0) { result+=ii; }
		ii++;
	}
	std::cout << "Papi eso da: " << result << ", sencillo pahhh" << std::endl;
	return 0;
}