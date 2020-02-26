#include <iostream>
#include <list>

using namespace std;

struct node
{
  int data;
  node *next;
};

class LinkList
{
private:
  node *head, *tail;

public:
  
  LinkList()
  {
    head = NULL;
    tail = NULL;
  }

  void createnode(int value)
  {
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    if (head == NULL)
    {
      head = temp;
      tail = temp;
      temp = NULL;
    }
    else
    {
      tail->next = temp;
      tail = temp;
    }
  }

  void display()
  {
    node *temp = new node;
    temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
  }
  void insert(int data, int n)
  {
    node *temp = new node;
    temp->data = data;
    temp->next = NULL;
    if(n == 1){
      temp->next = head;
      head = temp;
      return;
    }
    node *temp1 = head;
    for(int i = 0; i < n -2; i++){
      temp1 = temp1-> next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
  }
};

int main()
{
  LinkList myList;
  int x, y;
  cout << "Put in whatever numbers you want" << endl;
  cin >> x;
  for(int i = 0; i < x; i++){
    cin >> y;
    myList.createnode(y);
  }
  myList.insert(3, 2);
  myList.display();

  return 0;
}
