#include <bits/stdc++.h>

using namespace std;

string numberInWords(int n);
string multiplesOfTens(int n);
string numberInWords1to19(int n);

string multiplesOfTens(int n) {
    int value = n / 10;
    switch(value) {
        case 1: return "ten"; break;
        case 2: return "twenty"; break;
        case 3: return "thirty"; break;
        case 4: return "forty"; break;
        case 5: return "fifty"; break;
        case 6: return "sixty"; break;
        case 7: return "seventy"; break;
        case 8: return "eighty"; break;
        case 9: return "ninety"; break;
    }
    return "";
}

string numberInWords1to19(int n) {
    switch(n) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        case 10: return "ten";
        case 11: return "eleven";
        case 12: return "twelve";
        case 13: return "thirteen";
        case 14: return "fourteen";
        case 15: return "fifteen";
        case 16: return "sixteen";
        case 17: return "seventeen";
        case 18: return "eighteen";
        case 19: return "nineteen";
    }
    return "";
}

string numberInWords(int n) {
    if (n >= 20 && n < 100) {
        string tens = multiplesOfTens(n);
        return tens + " " + numberInWords1to19(n % 10);
    } else {
        return numberInWords1to19(n);
    }
    return "unsupported";
    
}

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    
    string output = "";
    if (m == 0) {
        return numberInWords(h) + " o\' clock";
    }
    else if (m <= 30) {
        string unit = "";
        if (m == 1) {
            unit += "minute";
        } else {
            unit += "minutes";
        }
        if (m == 15) {
            output += "quarter past ";
        } else if (m == 30) {
            output += "half past ";
        } else {
            output += numberInWords(m) + " " + unit + " past ";
        }
    } else {
        h++;
        string unit = "";
        if (m == 1) {
            unit += "minute";
        } else {
            unit += "minutes";
        }
        if (m == 45) {
            output += "quarter to ";
        } else {
            output += numberInWords(60 - m) + " " + unit + "to ";
        }
    }
    return output + numberInWords(h);
}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    cout << result << endl;
    // fout << result << "\n";

    // fout.close();

    return 0;
}
