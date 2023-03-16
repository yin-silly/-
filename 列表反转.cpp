#include<iostream>
#include<queue>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}

};

ListNode* reverseList(ListNode* head) {
	//queue<int> qi;
	ListNode* newli = nullptr;
	ListNode* oldli = head;

	/*while (head) {
		qi.push(head->val);
		head = head->next;
	}*/
	while (oldli) {
		ListNode* next = oldli->next;
		oldli->next = newli;
		newli = oldli;
		oldli = next;
	}


	return newli;


}
//
//int main() {
//	return 0;
//}