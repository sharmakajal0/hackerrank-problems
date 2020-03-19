#include<cmath>
#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;

class Calculator
{
    public:
        string s = "n and p should be non negative";
        int power(int base, int exponent){
            if(base >= 0 && exponent >= 0){
                return pow(base, exponent);
            }
            else
            {
                throw invalid_argument("n and p should be non-negative");
            }
        }

};


int main() {
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while(T --> 0){
        if(scanf("%d%d",&n, &p) == 2){
            try{
                int ans =myCalculator.power(n, p);
                cout << ans << endl;
            }
            catch(exception& e){
                cout << e.what() << endl;
            }
        }
    }

    return 0;
}
