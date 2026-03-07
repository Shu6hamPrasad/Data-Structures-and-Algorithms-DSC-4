#include <stdio.h>
#include <stdbool.h>
#define MAX 10

int arr[MAX];
int top = -1;

void push(int x)
{
  if(top < MAX) arr[++top] = x;
  else printf("ERR: Stack Overflow\n");
}

int pop()
{
  if(top < 0) printf("ERR: Stack Underflow\n");
  else{
    --top;
    return arr[top + 1];
  }
}

int peek()
{
  if(top < 0) printf("ERR: Stack Underflow");
  else return arr[top];
}

bool isEmpty()
{
  return top == -1 ? 1 : 0;
}
  
int main(void)
{
  push(13);
  push(12);
  push(23);
  for(int i = 0; i <= top; i++) printf("%d, ", arr[i]);
  printf("\n%d\n", peek());
  pop();
  pop();
  pop();
  pop();
  printf("%b\n", isEmpty());
  return 0;
}
