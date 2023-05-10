#include <iostream>
using namespace std;
#define max 100

int Queue[6];
int front, rear;

void QueueInit(){
	front = 0;
	rear = -1;
}

void enqueue(int V){
	if(rear >= max-1){
		cout<<"Queue is full";
	}else{
		rear++;
		Queue[rear] = V;
	}
}

int dequeue(){
	if(front > rear){
		cout<<"Queue is empty";
		return -1;
	}else{
		int res = Queue[front];
		front++;
		return res;
	}
}

//print Queue
void printQueue(){
	if(front > rear){
		cout<<"Queue is empty";
	}else{
		cout<<"Elements in Queue:";
		for(int i=front;i<=rear;i++){
			cout<<Queue[i]<<" ";
		}
	}
}

int main(){
	//init Queue
	QueueInit();
	//enqueue to Queue
	enqueue(41);
	enqueue(23);
	enqueue(4);
	enqueue(14);
	enqueue(56);
    enqueue(1);
	//print Queue
	printQueue();
	//dequeue from Queue
	cout<<endl<<"Dequeue fromt Queue:";
	cout<<dequeue()<<" ";
	cout<<dequeue()<<endl;
	//print Queue after dequeue
	cout<<"Print Queue after dequeue"<<endl;
	printQueue();
}