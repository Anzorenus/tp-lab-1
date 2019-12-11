#include "task2.h"

bool checkPrime(unsigned int value) {
	if (value == 1 || value <= 0) {
		return 0;
	}
	for (int i = 2; i < value; i++) {
		if (value % i == 0) {
			return 0;
		}
	}
	return 1;
}
unsigned long long nPrime(unsigned n) {
	int c = 0;
	int i = 1;
	while (c != n) {
		if (checkPrime(i)){
			c++;
		}
		i++;
	}
	return (i-1);
}
unsigned long long nextPrime(unsigned long long value) {
	while (1) {
		value++;
		if (checkPrime(value)) {
			return value;
		}
	}
}