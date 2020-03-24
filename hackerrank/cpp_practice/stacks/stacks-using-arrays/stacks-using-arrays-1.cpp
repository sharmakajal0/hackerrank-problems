#include<iostream>
#include<vector>

using namespace std;

#define MAX 100

class Exception: exception {
    private:
        string message;
    public:
        Exception(string message) {
            this->message = message;
        }
        Exception(const char* message) {
            this->message = string(message);
        }
        string getMessage() {
            return this->message;
        }
};

class Stack{
    private:
        int top;
    public:
        int container[100];
        Stack(){
            top = -1;
        }

        bool is_empty(){
            return top < 0;
        }
        
        bool is_full(){
            return top == (100 -1);
        }

        void push(int i){
            if(is_full()){
                throw "Stack Overflow";
            }
            else{
                container[++top] = i;
                cout << i << " pushed into stack" << endl;
            }
        }

        int pop(){
            int a;
            if(is_empty()){
                throw "Stack Underflow";
            }
            else{
                a = container[top--];
                return a;
            }
        }

        void printstack(){
            for(int i=0;i<=top;i++){
                cout << container[i] << " ";
            }
            cout << endl;
        }
};

void test() {
    class Stack obj;
    obj.push(1);
    obj.printstack();
    obj.pop();
    obj.printstack();
    obj.push(2);
    obj.printstack();
    obj.push(3);
    obj.printstack();
    obj.push(4);
    obj.printstack();
    obj.push(5);
    cout << obj.pop() << " popped from stack" << endl;
    obj.printstack();
    obj.push(10);
    obj.printstack();
    cout << obj.pop() << " popped from stack" << endl;
    obj.printstack();
    cout << obj.pop() << " popped from stack" << endl;
    obj.printstack();
    cout << obj.pop() << " popped from stack" << endl;
    obj.printstack();
    cout << obj.pop() << " popped from stack" << endl;
    obj.printstack();
    cout << obj.pop() << " popped from stack" << endl;
    obj.printstack();
    cout << obj.pop() << " popped from stack" << endl;
    obj.printstack();
    
}

int main() {
    
    try {
        test();
    } catch (string err) {
        cout << "Caught string exception: " << err << endl;
    } catch (const char* err) {
        cout << "Caught const char* exception: " << err << endl;
    } catch (Exception* ex) {
        cout << "Caught generic exception: " << ex->getMessage() << endl;
    }
    // obj.printstack(obj.container);
    return 0;
}
