#include <iostream>

using namespace std;

int Fibo(int x);

int main() {
	int x = 1;
	int res = 0;
	
	while(Fibo(x) < 4000000) {
		if(Fibo(x)%2 == 0) {
			res += Fibo(x);
		}
		x++;
	}
	cout << res << endl;
}

int Fibo(int x) {
	if(x==1) {
		return 1;
	}
	else if(x==2) {
		return 2;
	}
	else {
		return Fibo(x-1) + Fibo(x-2);
	}
}
