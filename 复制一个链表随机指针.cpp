#include<iostream>
#include<memory>
#include<unordered_map>
//#include<graphics.h>//easyxͼ�ο�
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

Node* copyRandomList(Node* head) {//ʹ�ü�ֵ�����洢�ڵ㣬���û�д��� �򴴽���ֵ���������
    if (head == nullptr)            //����ֵ��ָ��
        return nullptr;
    if (!cachedNode.count(head)) {
        Node* newhead = new Node(head->val);
        cachedNode[head] = newhead;
        newhead->next = copyRandomList(head->next);
        newhead->random = copyRandomList(head->random);
     }
    return cachedNode[head];


}

