#include <iostream>

using namespace std;

#define MAX 3

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

class Queue{
    private:
        int container[MAX];
        int front;
        int end;
    public:
        Queue(){
            front = -1;
            end = -1;
        }

        bool is_full(){
            return ((end == MAX - 1 && front == 0) || (end == front -1));
        }

        bool is_empty(){
            return front == -1;
        }

        void enqueue(int i){
            if(is_full()){
                throw "Queue is full";
            }
            else{
                if(end == MAX - 1 && front != 0){
                    end = 0;
                    container[end++] = i;
                    cout << i << " enqueued into the queue." << endl;
                }
            }
        }

        int dequeue(){
            if(is_empty()){
                throw "Queue Underflow";
            }
            else{
                if(front == end){
                    front = end = -1;
                }
                else{
                    front = 0;
                    int a = container[front++];
                    return a;
                }
            }
        }

        void display(){
            cout << "front: " << front << endl;
            cout << "Queue: ";
            for (int i = front; i <= end; i++)
            {
                cout << container[i] << " ";
            }
            cout << endl;
            
        }
};

void test(){
    Queue obj;
    
    obj.enqueue(1);
    obj.enqueue(2);
    obj.display();
    cout << obj.dequeue() << " removed from queue" << endl;
    obj.display();
}

int main(){
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
