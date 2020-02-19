#include"header.h"

// can't quite get it to not add duplicates to the array...
void adder(int number, vector<int>& dynArray) {
	for (vector<int>::iterator i = dynArray.begin(); i != dynArray.end(); i++) {
		if (number != *i) {
			dynArray.push_back(number);
		}
		else
			return;
	}

}

// subtracts elements from the array
void subber(int number, vector<int>& dynArray) {
	vector<int>::iterator toRemove = dynArray.begin();
	for (vector<int>::iterator ip = toRemove; ip != dynArray.end(); ++ip) {
		if (*ip == number)
			toRemove = ip;
	}
	dynArray.erase(toRemove);
}

// displays the array
void output(vector<int> dynArray) {
	sort(dynArray.begin(), dynArray.end());
	for (vector<int>::iterator ip = dynArray.begin();
		ip != dynArray.end(); ++ip) {
		cout << *ip << " ";
	}
	cout << endl;
}
