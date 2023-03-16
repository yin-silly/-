#include<iostream>
#include<memory>
#include<unordered_map>
#include<graphics.h>
#include<conio.h>

using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

unordered_map<Node*, Node*> cachedNode;

Node* copyRandomList(Node* head) {
    if (head == nullptr)
        return nullptr;
    while (!cachedNode.count(head)) {
        Node* newhead = new Node(head->val);
        cachedNode[head] = newhead;
        newhead->next = head->next;
        newhead->random = head->random;
     }
    return cachedNode[head];


}

int main() {
    
    initgraph(640, 480);
    fillcircle(150, 150, 150);
    _getch();
    closegraph();
    
    return 0;
}