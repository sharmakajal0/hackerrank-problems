#include<iostream>

using namespace std;

template <class sum_type>
sum_type sum(sum_type a, sum_type b) {
	return a + b;
}

int main() {
	long a, b;
	cin >> a >> b;
	cout << a << " " << b << endl;
	cout << sum<int>(a, b) << endl;

	return 0;
}
