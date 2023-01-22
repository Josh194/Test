#include <iostream>

int main() {
	int x = 1;

	for (int i = 1; i < 5; i++) {
		x *= i;
	}

	std::cout << "Test Message" << std::endl;

	return 0;
}