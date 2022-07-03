// CPP program to show the implementation of List
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

// function for printing the elements in a list
void showlist(list<int> g) {
	
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it) 
		cout << '\t' << *it;
		
}

// Driver Code
int main() {

	list<int> gqlist1;

	for (int i = 0; i < 5; ++i) {
		gqlist1.push_back(i * i * i);
	}
	cout << "\nList 1 (gqlist1) is : ";
	showlist(gqlist1);

	return 0;

} // End driver

