#include <iostream>
using namespace std;
  
struct QNode { //建立節點
    QNode(int);
    int data;
    QNode* next;
};
QNode::QNode(int d)  //應該是初始化

    {
        data = d;
        next = NULL;
    }

  
struct Queue {
    QNode *front, *rear; //建立指標front前.rear後
    Queue(); //初始化
    void enQueue(int);
    void deQueue();
};
 Queue::Queue(){
        front = rear = NULL;
 }
 void Queue::enQueue(int x){
     
  
        // Create a new LL node
        QNode* temp = new QNode(x);
  
        // If queue is empty, then
        // new node is front and rear both
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
  
        // Add the new node at
        // the end of queue and change rear
        rear->next = temp;
        rear = temp;
 }

 void Queue::deQueue(){
     // If queue is empty, return NULL.
        if (front == NULL)
            return;
  
        // Store previous front and
        // move front one node ahead
        QNode* temp = front;
        front = front->next;
  
        // If front becomes NULL, then
        // change rear also as NULL
        if (front == NULL)
            rear = NULL;
  
        delete (temp);
 }
  
// Driven Program
int main()
{
  
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.deQueue();
    q.deQueue();
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
   // q.deQueue();
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data;
}