#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "Enter number of items in the list\n";
	cin << n;
	vector<string> list(n,"");
	cout << "Enter your list.\n";
	for(int i=0; i<n; i++){
		cin >> list[i];	
	}
	cout<<"Thanks for entering list. This is a list:\n"
	for(int i=0; i<n; i++){
		cout << "Item " << i+1 << ": " list[i]<<"\n";	
	}
	cout << "List ends here!"
	
	return 0;
}
