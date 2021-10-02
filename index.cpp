#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number of items in the list\n";
	cin << n;
	
	string list[n];
	cout << "Enter your list.\n";
	for(int i=0; i<n; i++){
		cin >> list[i];	
	}
	
	for(int i=0; i<n; i++){
		cout << "Item " << i+1 << ": " list[i];	
	}
	cout << "List ends here!"
	
	return 0;
}
