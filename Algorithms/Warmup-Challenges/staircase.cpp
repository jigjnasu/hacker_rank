#include <iostream>

int main() {
	int N = 0;
	std::cin >> N;

	for (int i = 1; i <= N; ++i) {
		for (int j = 0; j < N - i; ++j)
			std::cout << " ";

		for (int k = 0; k < i; ++k)
			std::cout << "#";

		std::cout << std::endl;
	}

	return 0;
}
