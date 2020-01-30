#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>

using namespace std;

void input(int &);
void input(long &);
void input(float &);
void input(double &);
void input(string &);

#define STREAM_SIZE 10001


int main() {
    int test_count;
    input(test_count);

    for (int i = 0; i < test_count; i++)
    {
        string s;
        string left;
        string right;
        input(s);
        // cout << s << endl;
        
        for (int j = 0; j < s.length(); j+=2)
        {
            cout << s[j];
        }
        cout << " ";
        for (int j = 1; j < s.length(); j+=2)
        {
            cout << s[j];
        }
        cout << endl;
    }
    

    return 0;
}


void input(int &var) {
    cin >> var;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void input(long &var) {
    cin >> var;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void input(float &var) {
    cin >> var;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void input(double &var) {
    cin >> var;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void input(string &var) {
    char buffer[STREAM_SIZE];
    cin.getline(buffer, STREAM_SIZE, '\n');
    var.assign(buffer);
}
