#ifndef LinkedList_H
#define LinkedList_H

#include "Node.h"

class Linkedlist
{
private:
    Node* head;
public:
  Linkedlist();
  void addAtStart(string, float, int);
  void addAtEnd(string id, float rating, int votes);
  //void display();
  int getSize();
  bool isEmpty();
  Node* first();
  Node* last();
  Node* findNode(int);
  void display();
  bool find1(float);
  //void descending(string id, float rating, int votes);
};

#endif // LinkedList_H
