#include <iostream>

int main() {
	int i = 0;
	do {
		i += 5;
		std::cout << "[" << i << "]";
	}while(i < 50);
}