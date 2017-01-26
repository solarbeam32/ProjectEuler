#include <iostream>

using namespace std;

long long findLargestFactor(long long x);
bool isPrime(long long x);

int main() {
	long long x = 600851475143;
	long long largest = findLargestFactor(x);
	cout << largest << endl;
}

long long findLargestFactor(long long x) {
	long long n = 2;
	long long largest = x;
	long long currHalf = x;

	while(n < currHalf) {
		if(x % n == 0) {
			currHalf = x / n;
			if(isPrime(n)) {
				largest = n;
			}
			if(isPrime(currHalf)) {
				largest = currHalf;
			}
		}
		n++;
	}
	return largest;
}

bool isPrime(long long x) {
	long long n = 2;
	while(n < x) {
		if(x%n == 0) {
			return false;
		}
		n++;
	}
	return true;
}
