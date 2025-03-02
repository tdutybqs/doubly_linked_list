
//
//  main.cpp
//  doubly_linked_list
//
//  Created by helloKaviraj MBP on 21/04/21.
//


/* Before you start learning please read readme file */



#include <iostream>
using namespace std;

// *******************    Section - 1 *************************


// Doubly linked list creation
/*struct Node {
    int data;
    Node *next, *prev;
    Node(int d) : data(d), prev(nullptr), next(nullptr) {}
};


int main() {
    // We created three nodes
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    // Now we're linking nodes
    head -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    return 0;
}*/


//***************** END OF SECTION 1 ************************


//#############  CONTINUE YOUR LEARNING SCROLL DOWN ###############










// *******************    Section - 2 *************************


// Doubly linked list insert a node at begining
/*struct Node {
    int data;
    Node *next, *prev;
    Node(int d) : data(d), prev(nullptr), next(nullptr) {}
};

// Write a function to insert a node at begining
Node* insertBegining(Node *head, int data) {
    // First create a node because if doubly linked list is empty it will have atleast one node which you just created.
    Node *temp = new Node(data);
    temp -> next = head;
    if (head != NULL) {
        head -> prev = temp;
    }
    return temp;
}


int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
}*/


//***************** END OF SECTION 2 ************************













// *******************    Section - 3 *************************


// Insert at end of doubly linked list
/*struct Node {
    int data;
    Node *next, *prev;
    Node(int d) : data(d), prev(nullptr), next(nullptr) {}
};


// Insert a node at end of doubly linked list

Node* insertEndDoubly(Node *head, int data) {
    Node *temp = new Node(data);
    if (head == nullptr) {
        return temp;
    }
    Node *curr = head;
    while (curr -> next != nullptr) {
        curr = curr -> next;
    }
    curr -> next = temp;
    temp -> prev = curr;
    temp -> next = NULL;
    return head;
}

int main() {
//    Node *head = new Node(10);
//    Node *temp1 = new Node(20);
//    Node *temp2 = new Node(30);
//    head -> next = temp1;
//    temp1 -> prev = head;
//    temp1 -> next = temp2;
//    temp2 -> prev = temp1;
    // or
    Node *head = nullptr;
    head = insertEndDoubly(head, 10);
    head = insertEndDoubly(head, 20);
    return 0;
}*/


//***************** END OF SECTION 3 ************************















// *******************    Section - 4 *************************


// Reverse a doubly linked list
/*struct Node {
    int data;
    Node *next, *prev;
    Node(int d) : data(d), prev(nullptr), next(nullptr) {}
};

// Write a function which reverse a doubly linked list
Node* reverseDoubly(Node *head) {
    if (head == nullptr || head -> next == nullptr) {
        return head;
    }
    Node *prev = nullptr;
    Node *curr = head;
    while (curr != nullptr) {
        prev = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = prev;
        curr = curr -> prev;
    }
    return prev -> prev;
    
}


int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    
}*/


//***************** END OF SECTION 4 ************************














// *******************    Section - 5 *************************


// delete head node of a doubly linked list
/*struct Node {
    int data;
    Node *next, *prev;
    Node(int d) : data(d), prev(nullptr), next(nullptr) {}
};


// delete head node of a doubly linked list
Node* deleteHeadDoubly(Node *head) {
    // if doubly linked list is empty
    if (head == nullptr) {
        return nullptr;
    }
    // if only one node exist
    if (head -> next == nullptr) {
        delete head;
        return nullptr;
    }
    // if more node exist
    else {
        // head node pass in temp to delete
        Node *temp = head;
        // second node making head
        head = head -> next;
        // now your second node is head assign nullptr to it's previous
        head -> prev = NULL;
        // delete memory of your deleted node
        delete temp;
        return head;
    }
}


int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    // delete head of the doubly linked list
    deleteHeadDoubly(head);
    return 0;
}
 // time complexity is theta(1) constant operation and no auxilary space required
*/


//***************** END OF SECTION 5 ************************














// *******************    Section - 6 *************************


// Delete last node of a doubly linked list
/*struct Node {
    int data;
    Node *next, *prev;
    Node(int d) : data(d), prev(nullptr), next(nullptr) {}
};


// function which deletes last node of doubly linked list
Node* deleteLastNodeDoubly(Node *head) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head -> next == nullptr) {
        delete head;
        return nullptr;
    }
    Node *curr = head;
    // traverse the linked list and curr will stop which node we want delete
    while (curr -> next != nullptr) {
        curr = curr -> next;
    }
    // the node which we want to delete set it's previous element next to nullptr
    curr -> prev -> next = nullptr;// simply this code means(curr -> prev) one node back and that particular node next set to nullptr means making it last node
    delete curr;
    return head;
}


int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    // delete last node doubly linked list
    deleteLastNodeDoubly(head);
    return 0;
}*/


//***************** END OF SECTION 6 ************************
