#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void appendNode(Node** head, Node** end, int data){
    Node* aux = new Node();
    aux->data = data;    
    aux->next = NULL;    

    if((*head) == NULL){                
        (*head) = aux;
        (*end) = aux;
    }else{        
        (*end)->next = aux;
        (*end) = aux;
    }
}

void deleteNode(Node** head, Node** end, int data){
    Node* auxHead = (*head);
    Node* auxEnd = (*end);
    Node* prev = auxHead->next;

    if(auxHead->data == data){
        (*head) = auxHead->next; 
        return;
    }

    auxHead = auxHead->next;

    while(auxHead != NULL){
        if(auxHead->data == data){
            prev->next = auxHead->next;
            if(auxHead->next == NULL){
                (*end) = prev;
            }
            return;
        }
        prev = auxHead;
        auxHead = auxHead->next;
    }
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){    
    Node* head = NULL;
    Node* end = NULL;
    appendNode(&head,&end, 5);
    appendNode(&head,&end, 7);
    appendNode(&head,&end, 8);
    appendNode(&head,&end, 10);
    appendNode(&head,&end, 11);
    appendNode(&head,&end, 14);
    print(head);
    deleteNode(&head,&end,14);    
    print(head);
    return 0;
}

