#include <iostream>
#include <ctime>
#include "queue.h"
//#include "stack.h"

void fillArray(int numArray[]){
  for(int i = 0;i < 12; i++){
    numArray[i] = (rand() % 100 ) + 1;
  }
}

int main(){
 //std::cout << "Hello:";
 srand(time(0));
 int numbers[12];
 fillArray(numbers);
 queue queue1;
 int input;
 std::cout << "Please input integers, positive to enqueue, negative to dequque, 0 when finished";
 do{
   std::cin >> input;
  queue1.inputQueue(input);

 }while(input != 0);

 
}