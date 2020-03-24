#include<iostream>

using namespace std;

#define MAX 5

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
        int front;
        int rear;
    public:
        int *arr;
        
        Queue(){
            front = -1;
            rear = -1;
        }

        bool is_empty(){
            return front == rear == -1;
        }

        bool is_full(){
            return ((front == 0 && rear == MAX - 1) || ((rear + 1) % MAX == front));
        }

        void enqueue(int value){
            if(is_full()){
                throw "Queue Overflow";
            }

            else if(front == -1 || rear == -1){
                front = 0;
                rear = 0;
            }
            else if(front != 0 && rear == MAX - 1){
                rear = 0;
            }
            else{
                rear = (rear + 1) % MAX;
            }
            arr[rear] = value;
            cout << value << " enqueud into the queue" << endl;
        }

        int dequeue(){
            int data;
            if(is_empty()){
                throw "queue underflow";
            }
            else if(front == rear){
                front = -1;
                rear = -1;
            }
            else if(front == MAX - 1){
                front = 0;
            }
            else{
                front++;
            }
            data = arr[front];
            return data;
        }

        void display(){
            cout << "front: " << front << endl;
            cout << "rear: " << rear << endl;
            if(front == -1){
                cout << "Queue is Empty" << endl;
            }
            else{
                if(front > rear){
                    for (int i = front; i < MAX; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    for(int i = 0; i <= rear; i++){
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                else{
                    for (int i = front; i <= rear; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
            }
        }
};

void test() {
    Queue obj;
    
    obj.enqueue(1);
    obj.display();
    obj.enqueue(2);
    obj.display();
    obj.enqueue(3);
    obj.display();
    obj.enqueue(4);
    obj.display();
    obj.enqueue(5);
    obj.display();
    cout << obj.dequeue() << " removed from the queue." << endl;
    obj.display();
    obj.enqueue(6);
    obj.display();
    cout << obj.dequeue() << " removed from the queue." << endl;
    obj.display();
    cout << obj.dequeue() << " removed from the queue." << endl;
    obj.display();
    cout << obj.dequeue() << " removed from the queue." << endl;
    obj.display();
    cout << obj.dequeue() << " removed from the queue." << endl;
    obj.display();
    cout << obj.dequeue() << " removed from the queue." << endl;
    obj.display();
    obj.enqueue(7);
    obj.display();
    obj.enqueue(12);
    obj.enqueue(34);
    obj.display();
    obj.dequeue();
    obj.display();
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
