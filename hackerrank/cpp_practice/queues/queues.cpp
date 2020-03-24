#include<iostream>
#include<queue>

using namespace std;

void showQueue(queue <int> gq){
    queue <int> g = gq;
    while(!g.empty()){
        cout << ' ' << g.front();
        g.pop();
    }
    cout << endl;
}

int main() {

    queue <int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
    
    cout << "The queue gquiz is : ";
    showQueue(gquiz);
    cout << endl;
    cout << "Size of gquiz: " << gquiz.size() << endl;
    cout << "Front of gquiz" << gquiz.front() << endl;
    cout << "Back of gquiz" << gquiz.back() << endl;
    cout << "Popping from gquiz: ";
    cout << endl;
    gquiz.pop();
    showQueue(gquiz);

    return 0;
}
