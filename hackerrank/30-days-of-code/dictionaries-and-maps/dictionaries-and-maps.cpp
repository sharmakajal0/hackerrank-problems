#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    map<string, string> phonebook;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string name, phone;
        cin >> name >> phone;
        phonebook[name] = phone;
    }
    
    map<string, string>::iterator search;
    string query;
    while(cin >> query) {
        search = phonebook.find(query);
        
        if ( search != phonebook.end() ){
            cout << (*search).first << "=" << (*search).second << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
