#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T=0; string S = "";
	cin >> T;
	
	while(T--)
	{
	    cin >> S;
	    for(int i = 0; i<S.length(); i=i+2)
	    cout << S[i];
	    cout << endl;
	}
	return 0;
}
