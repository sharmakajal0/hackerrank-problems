#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    int testCases;
    string inputString;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        getline(cin, inputString);
        string left = "";
        string right = "";
        int length = sizeof(inputString);
        for(int i=0;i<length;i++){
            if(i % 2 == 0){
                left.push_back(inputString[i]);
            } else
            {
                right.push_back(inputString[i]);
            }
        }

        cout << left << endl;
        // cout << left << " " << right << endl;
        // printf(cout, "%s %s", left, right);
    }
    // std::cout << "review-loop cpp program" << std::endl;
    return 0;
}
