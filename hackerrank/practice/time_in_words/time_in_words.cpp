#include <bits/stdc++.h>

using namespace std;

string numberInWords1to19(int n);
string multiplesOf10(int n);
string numberInWords(int n);

string multiplesOf10(int n) {
    int q = n / 10;
    switch(q) {
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

string numberInWords(int n) {
    if (n > 20 && n < 100) {
        string tens = multiplesOf10(n);
        return tens + " " + numberInWords1to19(n % 10);
    } else {
        return numberInWords1to19(n);
    }
    return "unsupported";
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

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    string output = "";

    if (m == 0) {
        return numberInWords(h) + " o\' clock";
    }
    else if (m <= 30) {
        string unit = (m == 1? "minute" : "minutes");
        if (m == 15) {
            output += "quarter past ";
        } else if (m == 30) {
            output += "half past ";
        } else {
            output += numberInWords(m) + " " + unit + " past ";
        }
    } else {
        h++;
        string unit = (m == 59? "minute" : "minutes");
        if (m == 45) {
            output += "quarter to ";
        } else {
            output += numberInWords(60 - m) + " " + unit + " to ";
        }
    }

    return output + numberInWords(h);
}

void testNumberInWords() {
    cout << "1 : " << numberInWords(1) << endl;
    cout << "6 : " << numberInWords(6) << endl;
    cout << "12 : " << numberInWords(12) << endl;
    cout << "23 : " << numberInWords(23) << endl;
    cout << "37 : " << numberInWords(37) << endl;
    cout << "50 : " << numberInWords(50) << endl;
    cout << "59 : " << numberInWords(59) << endl;
    cout << "67 : " << numberInWords(67) << endl;
    cout << "29 : " << numberInWords(29) << endl;
    cout << "16 : " << numberInWords(16) << endl;
}

// int main(int argc, const char** argv) {
//     testNumberInWords();

//     return 0;
// }

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
