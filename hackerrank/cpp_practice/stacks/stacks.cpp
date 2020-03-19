#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void showstack(stack <int> s){
    while(!s.empty()){
        cout << ' ' << s.top();
        s.pop();
    }
    cout << endl;
}

int main() {
    
    return 0;
}
