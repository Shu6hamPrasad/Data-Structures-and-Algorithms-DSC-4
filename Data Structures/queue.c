#include <stdio.h>
#include <stdbool.h>
#define MAX 10

int arr[MAX];
int front = -1, rear = -1;

bool isEmpty()
{
  if(front == rear && rear == -1) return 1;
  else return 0;
}

bool isFull()
{
  if(front == 0 || rear == MAX - 1) return 1;
  else return 0;
}

void enqueue(int x)
{
  if(isEmpty()){
    front = 0;
    rear = 0;
    arr[front] = x;
  }
  else if(isFull()){
    printf("ERR: Queue Full\n");
    return;
  }
  else arr[++rear] = x;
}

int dequeue(){
  if(isEmpty()) printf("ERR: Empty Queue");
  else if(front == rear){
    int k = rear;
    front = -1;
    rear = -1;
    return arr[k];
  }
  else return arr[front++];
}

int peek()
{
  if(isEmpty()){
    printf("ERR: Empty Queue\n");
  }
  else return arr[front];
}

int main(void)
{
  enqueue(40);
  enqueue(70);
  enqueue(78);
  for(int i = front; i <= rear; i++) printf("%d, ", arr[i]);
  return 0;
}
