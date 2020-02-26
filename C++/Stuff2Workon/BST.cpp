#include <bits/stdc++.h>

using namespace std;

struct Node{
  int data;
  Node* right;
  Node* left;
};

void create(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->right= temp->left=NULL;
  return temp;
}

int main(){
  int n;
  cin >> n;
  create(n);

}
