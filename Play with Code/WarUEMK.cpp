#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T=0; string FullStack; string Developers;
	int count = 0;
	cin >> T;
	
	while(T--)
	{
	    count =0;
	    cin >> FullStack;
	    cin >> Developers;
	    for(int i = 0; i<= FullStack.length() ; i++)
	    {
	        for(int j = 0; j<= Developers.length(); j++)
	        {
	            if(Developers[i] == FullStack[j])
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
