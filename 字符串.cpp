#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

//给定一个字符串，将其中的空格替换为“%20
string replaceSpace(string s) {
	if (s == "") return "";
	auto i = s.begin();
	while ( i != s.end() ) {
		if (*i == ' ') {
			i = s.erase(i);
			i = s.insert(i,{'%','2','0'});
			i += 2;
		}
		i++;
	}
	
	return s;
	//return s.replace(1,1,"12");
}
//
//int main() {
//
//	string s = "We are happy.";
//	//auto i = s.begin();
//	//i = s.erase(i);
//	//cout << *i << endl;;
//	//i=s.insert(i, { '%','2','0' });
//	//cout << *i << endl;
////	cout << s;
//	cout<<replaceSpace(s);
//	return 0;
//}