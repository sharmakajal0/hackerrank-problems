#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j;
    double d2;
    string s2;
    // Read and save an integer, double, and String to your variables.
    cin >> j;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cin >> d2;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin >> ws, s2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + j << endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + d2 << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << s2 << endl;

    return 0;
}
#include<iostream>

int main() {
    std::cout << "data-types cpp program" << std::endl;
    return 0;
}
