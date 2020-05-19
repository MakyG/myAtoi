#include <iostream>

int myAtoi(char* str) {
	int i = 0;
	int result = 0;
	int sign = 0;

	if (str[0] == '-') {
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; ++i) {
		result = result * 10 + str[i] - '0';
	}
	return sign * result;
}

int main() {
	char str1[] = "-50614";
	int value = myAtoi(str1);
	std::cout << value << "\n";
	return 0;
}