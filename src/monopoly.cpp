using namespace std;
#include <string> 
#include <iostream>
#include "monopoly.hpp"


void theBoard::append(int num){
   monopoly* newNode = new monopoly;
   newNode->data = num;
   newNode->next = nullptr;

   if(head == nullptr){
      head = newNode;
      tail = newNode;
      current = head;
   } else {
      tail->next = newNode;
      tail = newNode;
   }
}
int theBoard::retrieve(){
   if(current == nullptr){
      return -1;
   }
   return current->data;
}

void theBoard::move(int spaces){
   for(int i = 0; i < spaces; i++){
      if(current != nullptr){
         current = current->next;
      }
   }
}
