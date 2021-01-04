#include <iostream>
#include "Node.h"
#include <string>
using namespace std;

Node::Node()
{
  id = "0";
  rating = 0;
  votes = 0;
  next = NULL;
}

Node::Node(string id, float rating, int votes)
{
  this->id = id;
  this->rating = rating;
  this->votes = votes;
  next = NULL;
}

void Node::setId(string id)
{
  this->id =  id;
}

string Node::getId()
{
  return id;
}

void Node::setRating(float rating)
{
  this->rating = rating;
}

float Node::getRating()
{
  return rating;
}

void Node::setVotes(int votes)
{
  this->votes = votes;
}

int Node::getVotes()
{
  return votes;
}

void Node::setNext(Node* next)
{
  this->next = next;
}

Node* Node::getNext()
{
  return next;
}
