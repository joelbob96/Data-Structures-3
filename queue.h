#include <iostream>

#define arrSize 10

class queue{
private:
int arraySize = arrSize;
int numbers[arrSize];
int front = 0;
int rear = 0;
int numElements = 0;
public:

void enqueue(int num){
  if (!isFull()){
    numbers[rear] = num;
    rear = (rear + 1) % arraySize;
    numElements++;
    std::cout << num << " is a positive number, after enqueueing ";
  }else{
  std::cout << "The queue is full, ";
  std:: cout << num << " was not added\n";
  }
}

int dequeue(int number){
  if(!isEmpty()){
    int num = numbers[front];
    front = (front + 1) % arraySize;
    numElements--;
    std::cout << number << " is a negative number, after dequeueing " << num << ' ';
    return num;
  }else
  std::cout << "The queue is empty ";
  return 0;
}

bool isEmpty(){
  if(numElements == 0)
  return true;
    else
    return false;
}

bool isFull(){
  if(numElements == arraySize)
    return true;
  else 
    return false;
}

void printQueue(){
  int j = front;
  std::cout << "queue contents are: ";
  for(int i = 0; i < numElements; i++, j = (j + 1) % arraySize)
  std::cout << numbers[j] << ' ';

  std::cout << '\n';
}

int inputQueue(int i){
  if(i < 0){
    int j = dequeue(i);
    printQueue();
    return j;
  }else if(i > 0){
    enqueue(i);
    printQueue();
    return i;
  }else if(i == 0){
  std::cout << "0 entered, exiting";
  return 0;
  }
  return 0;
}
};