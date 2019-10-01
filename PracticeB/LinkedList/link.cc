#include <bits/stdc++.h>
using namespace std;

// struct Node{
//     int value;
//     struct Node* next;
// }
// typedef struct Node* node;

class NodeP{
    public:
    int value;
    NodeP* next;

    NodeP(int v){
        value = v;
        this->next = NULL;
    }
};


NodeP head = NULL:


void insertAtB(int v){
    new_node = new NodeP(v);
    new_node->next = head;
    head = new_node;
}

void insertAtE(int v){
    if(head == NULL){
        insertAtB(v);
    }
    else{
        new_node = new NodeP(v);
        
    }
}

void print(){
  NodeP temp = head;
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}
int main(){

}