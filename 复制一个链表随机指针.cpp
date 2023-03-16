#include<iostream>
#include<memory>
#include<unordered_map>
//#include<graphics.h>//easyx图形库
//#include<conio.h>

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

Node* copyRandomList(Node* head) {//使用键值对来存储节点，如果没有创建 则创建键值，如果创建
    if (head == nullptr)            //返回值的指针
        return nullptr;
    if (!cachedNode.count(head)) {
        Node* newhead = new Node(head->val);
        cachedNode[head] = newhead;
        newhead->next = copyRandomList(head->next);
        newhead->random = copyRandomList(head->random);
     }
    return cachedNode[head];


}

