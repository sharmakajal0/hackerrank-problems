#include<iostream>

using namespace std;

int main() {
    std::cout << "loops cpp program" << std::endl;
    int n;
    cin >> n;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 1; i < 11; i++)
    {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }
    

    return 0;
}