using namespace std;
#include <string> 
#include <iostream>
#include "monopoly.hpp"


void theBoard::append(string name){
   monopoly* newNode = new monopoly;
   newNode->name = name;

   if(head == nullptr){
      head = newNode;
      tail = newNode;
      current = head;
      tail->next = head; // Make it circular
   } else {
      tail->next = newNode;
      tail = newNode;
      tail->next = head; // Make it circular
   }
}
string theBoard::retrieve(){
   if(current == nullptr){
      return "";
   }
   return current->name;
}

void theBoard::move(int spaces){
   for(int i = 0; i < spaces; i++){
      if(current != nullptr){
         current = current->next;
      }
   }
}
