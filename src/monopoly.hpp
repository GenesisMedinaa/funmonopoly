
#ifndef MONOPOLY_HPP
#define MONOPOLY_HPP

#include <string>
using namespace std;

//construct monopoly name holder and pointer
struct monopoly{
    string name;
    monopoly* next;
};

//construct the circular linked list using monopoly struct
class theBoard{
   private:
   monopoly* head;
   monopoly* tail;
   monopoly* current;
   public:
   theBoard(){
      head = nullptr;
      tail = nullptr;
      current = nullptr;
   }

   //template for functions used
   void append(string name);
   string retrieve();
   void move(int spaces);   
};

#endif
