#include<iostream>
#include<list>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
#include<utility>

using namespace std;

int strStr(string haystack, string needle) {
	
	auto i =haystack.find(needle);
	return i;

}

//
//int main() {
//	string d = "leetcode", q = "leeto";
//	cout<<strStr(d, q);
//
//    
//	return 0;
//}