#include <iostream>
using namespace std;
struct QNode { //建立節點
    QNode(int d)  //應該是初始化
    {
        data = d;
        next = NULL;
    }
    int data;
    QNode* next;
};

struct Queue {
    QNode *front, *rear, *temp; //建立指標front前.rear後
    Queue() //初始化
    {
        front = rear = NULL;
    }
    //加入
    void enQueue(int x) // int x 是要輸入的數字
    {
  
        // Create a new LL node
        temp = new QNode(x);//新增動態空間，配置完成後指定儲存值
  
        // If queue is empty, then
        // new node is front and rear both
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp; //將rear指向的struct裡的next指向temp
        rear = temp;
    }
    void deQueue()
    {
        // If queue is empty, return NULL.
        if (front == NULL)
            return;
        // Store previous front and
        // move front one node ahead
        QNode* temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
  
        delete (temp); //須是先前配置給以 new 運算子建立之物件的記憶體區塊指標
    }
    void goBack()
    {
        rear->next=front;
        front=front->next;
        rear=rear->next;
        rear->next=NULL;
    }
    int size()
    {
        QNode* temp = front;
        int sizeNum=0;
        while(temp!=NULL){
            if(temp==NULL){
                break;
            }
            temp=temp->next;
            sizeNum+=1;
        }
        return sizeNum;
    }
};
  
// Driven Program
int main()
{
  
    
    int input,i,number,count;
    Queue student;
 
    cout<<"輸入學生、餐點數量:";
    cin>> number;
    cout<<"\n輸入學生餐點:"<<endl;
    for (i=0;i<number;i++){
        cin>>input;
        student.enQueue(input);
    }
    //student.goBack();

    //cout << "Queue Front : " << (student.front)->data << endl;
    //cout << "Queue Rear : " << (student.rear)->data<<endl;
    cout<<"size="<<student.size();
}