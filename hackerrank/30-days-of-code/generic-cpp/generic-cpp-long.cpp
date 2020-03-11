#include<iostream>

using namespace std;

long sum(long a, long b) {
	return a + b;
}

int main() {
	long a, b;
	cin >> a >> b;
	cout << sum(a, b) << endl;

	return 0;
}
