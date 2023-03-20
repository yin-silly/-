#include<iostream>
#include<vector>

using namespace std;

int minArray(vector<int>& numbers) {
	int mid = numbers.size() / 2;
	int temp=*numbers.begin();
	if (numbers[mid] >= *numbers.begin()) {
		for (auto i = numbers.rbegin(); i < numbers.rend()-1; i++) {
			if (*i < *(i + 1))
			{
				temp = temp > *i ? *i : temp;
				return temp;
			}
		}
	}
	else {
		for (auto i = numbers.begin()+1; i < numbers.end(); i++) {
			if (*i < *(i - 1))
			{
				temp = temp > *i ? *i : temp;
				return temp;
			}
		}
	}
	return temp;
}

int main() {
	vector<int> vi{ 3,1,3,3};
	cout << minArray(vi);


	return 0;
}