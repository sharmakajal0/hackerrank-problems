#include <bits/stdc++.h>

using namespace std;

// string convertToBinary(int n);

std::string convertToBinary(int n) {
    std::string binary;
    int remainder;

    while (n > 0){
        remainder = n % 2;
        n = (n / 2);
        std::string s = to_string(remainder);
        // cout << remainder << endl;
        binary += s;
    }
    return binary;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::string s = convertToBinary(n);
    // cout << s << endl;
    // std::string s = std::to_string(binaryNumber);

    int counter = 0;
    int j = 0;

    int length = s.size();

    for (int i = 0; i < length; i++)
    {
        if (s[i] == '1'){
            j++;
        }
        else {
            j = 0;
        }
        if (j > counter) {
            counter = j;
        }
    }
    cout << counter << endl;

    return 0;
}
