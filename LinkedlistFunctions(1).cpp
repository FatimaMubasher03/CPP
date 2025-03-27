#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void append(int val) {
        if (!head) {
            head = new Node(val);
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = new Node(val);
    }

    void printAlternativeNodes() {
        Node* temp = head;
        bool print = true;
        while (temp) {
            if (print) cout << temp->data << " ";
            print = !print;
            temp = temp->next;
        }
        cout << endl;
    }

    void printEvenNodes() {
        Node* temp = head;
        while (temp) {
            if (temp->data % 2 == 0) cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printSecondToSecondLast() {
        if (!head || !head->next) return;
        Node* temp = head->next;
        while (temp->next) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void addUnique(int val) {
        Node* temp = head;
        while (temp) {
            if (temp->data == val) return;
            temp = temp->next;
        }
        append(val);
    }

    void addIfLessThan10(int val) {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        if (count < 10) append(val);
    }

    void addIfSumLessThan500(int val) {
        int sum = 0;
        Node* temp = head;
        while (temp) {
            sum += temp->data;
            temp = temp->next;
        }
        if (sum + val < 500) append(val);
    }

    void segregateEvenOdd() {
        if (!head) return;
        Node* evenHead = nullptr, * evenTail = nullptr;
        Node* oddHead = nullptr, * oddTail = nullptr;
        Node* temp = head;
        
        while (temp) {
            Node* next = temp->next;
            temp->next = nullptr;
            if (temp->data % 2 == 0) {
                if (!evenHead) evenHead = evenTail = temp;
                else evenTail = evenTail->next = temp;
            } else {
                if (!oddHead) oddHead = oddTail = temp;
                else oddTail = oddTail->next = temp;
            }
            temp = next;
        }
        
        if (evenTail) evenTail->next = oddHead;
        head = evenHead ? evenHead : oddHead;
    }

    void addEvenBeforeOdd(int val) {
        if (!head || head->data % 2 == 1) {
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data % 2 == 0) temp = temp->next;
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void addOddAfterLastEven(int val) {
        if (!head || head->data % 2 == 0) {
            append(val);
            return;
        }
        Node* temp = head;
        Node* lastEven = nullptr;
        while (temp) {
            if (temp->data % 2 == 0) lastEven = temp;
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        if (!lastEven) {
            newNode->next = head;
            head = newNode;
        } else {
            newNode->next = lastEven->next;
            lastEven->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    list.append(5);
    list.append(12);
    list.append(7);
    list.append(10);
    list.append(3);
    list.append(8);

    cout << "Original List: ";
    list.display();
    
    cout << "Alternative Nodes: ";
    list.printAlternativeNodes();
    
    cout << "Even Nodes: ";
    list.printEvenNodes();
    
    cout << "Second to Second Last Node: ";
    list.printSecondToSecondLast();
    
    list.addUnique(8);
    list.addUnique(15);
    list.display();
    
    list.addIfLessThan10(20);
    list.display();
    
    list.addIfSumLessThan500(50);
    list.display();
    
    list.segregateEvenOdd();
    cout << "Even-Odd Segregated List: ";
    list.display();
    
    list.addEvenBeforeOdd(14);
    cout << "After adding even before odd: ";
    list.display();
    
    list.addOddAfterLastEven(9);
    cout << "After adding odd after last even: ";
    list.display();
    
    return 0;
}
