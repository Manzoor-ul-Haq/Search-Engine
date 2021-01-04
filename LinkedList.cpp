#include "LinkedList.h"
#include <string>
#include <iostream>
using namespace std;

Linkedlist::Linkedlist()
{
  head = NULL;
}

void Linkedlist::addAtStart(string id, float rating, int votes)
{
  if (isEmpty() == true)
  {
    head = new Node(id, rating, votes);
  }
  else
  {
    Node* temp = head;
    head = new Node(id, rating, votes);
    head->setNext(temp);
  }
}

void Linkedlist::addAtEnd(string id, float rating, int votes)
{
  Node* adding = new Node(id, rating, votes);
  if (isEmpty() == true)
  {
    addAtStart(id, rating, votes);
  }
  else
  {
    last()->setNext(adding);
  }
}

int Linkedlist::getSize()
{
  int i = 0;
  Node* temp = head;
  while (temp != NULL)
  {
    i++;
    temp = temp->getNext();
  }
  return i;
}

bool Linkedlist::isEmpty()
{
  return head == NULL;
}

Node* Linkedlist::first()
{
  return head;
}

Node* Linkedlist::last()
{
  Node* temp = head;
  while (temp->getNext() != NULL)
  {
    temp = temp->getNext();
  }
  return temp;
}

Node* Linkedlist::findNode(int i)
{
  int index = 0;
  Node* temp = head;
  while (temp != NULL)
  {
    if (index == i)
      break;
    temp = temp->getNext();
    index++;
  }
  return temp;
}

bool Linkedlist::find1(float rating)
{
  int index = 1;
  Node* temp = head;
  if (temp->getRating() == rating)
    return true;
  else
  {
    while (temp->getNext() != NULL)
    {
      if (temp->getNext()->getRating() == rating)
        return true;
      temp = temp->getNext();
      index++;
    }
    if(findNode(index) == last())
      return true;
    else
      return false;
  }
}

void Linkedlist::display()
{
  Node* temp = head;
  while(temp != NULL)
  {
    cout << temp->getId() << "\t" << temp->getRating() << "\t" << temp->getVotes() << endl;
    temp = temp->getNext();
  }
}

// void Linkedlist::descending(string id, float rating, int votes)
// {
//   Node* adding = new Node(id, rating, votes);
//   if (head == NULL)
//   {
//     head = adding;
//     return;
//   }
//   else if (head->getVotes() <= adding->getVotes())
//   {
//     addAtStart(id, rating, votes);
//     return;
//   }
//   // else if (last()->getVotes()  adding->getVotes())
//   // {
//   //   addAtEnd(id, rating, votes);
//   //   return;
//   // }
//   else
//   {
//     Node* temp = head;
//     while(temp->getNext() != NULL)
//     {
//       if (temp == last())
//         return;
//       else if (temp->getNext()->getVotes() <= adding->getVotes())
//       {
//         adding->setNext(temp->getNext());
//         temp->setNext(adding);
//         return;
//       }
//       temp = temp->getNext();
//     }
//   }
// }
