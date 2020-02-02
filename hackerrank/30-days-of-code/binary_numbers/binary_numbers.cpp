#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int get_number_of_digits(int num) {
    int digits = 1;
    
    while (num/10 != 0) {
        num /= 10;
        digits += 1;
    }

    return digits;
}

void print_digits(int num) {
    int num_digits = get_number_of_digits(num);
    bool print = true;
    char digits[num_digits] = {'\0'};
    int j=0;
    for(int i=0; i<num_digits; i++) {
        digits[j++] = num % 10 + 48;
        print = !print;
        num /= 10;
    }

    reverse(digits, digits+j);
    cout << digits << endl;
}

int main() {
    // int n;
    // cin >> n;
    print_digits(13);

    return 0;
}
