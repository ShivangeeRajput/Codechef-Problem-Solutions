#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int i;
	while (i < t) {
	   int x,y;
	   cin>>x>>y;
	   if(y>=x && y<=x+200) {
	       cout<<"YES"<<endl;
	       
	   }
	   else
	   {
	       cout<<"NO"<<endl;
	   }
	    i++;
	}
	return 0;
}