#ifndef Node_H
#define Node_H
#include <string>
//#include "LinkedList.h"
using namespace std;
class Node
{
private:
    int votes;
    float rating;
    string id;
    Node* next;
public:
  Node();
  Node(string, float, int);
  void setId(string);
  string getId();
  void setRating(float);
  float getRating();
  void setVotes(int);
  int getVotes();
  void setNext(Node*);
  Node* getNext();
};

#endif // Node_H
