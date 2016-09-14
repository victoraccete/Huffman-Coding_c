#pragma once
#include "reader.h"

typedef struct node Node;
struct node{
  unsigned char m_data;
  int m_frequency; //prioridade
  Node *Next;
  Node *m_left;
  Node *m_right;
};

Node* createPriorityQueue();

int isEmpty(Node *node);

Node* insert(Node *node, unsigned char data, int frequency);

Node *insertNode(Node *queue, Node *inserted_node);

void printPriorityQueue(Node *node);
