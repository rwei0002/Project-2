#ifndef HEAP_H
#define HEAP_H
#include <iostream>
#include <exception>
#include <string>
#include <cstdio>

struct treeNode{
  int freq;
  treeNode* left;
  treeNode* right;
  char stored;
};

void heapify(treeNode* input[], int size);

#endif