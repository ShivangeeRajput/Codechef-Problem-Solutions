#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int A,B,C;
	cin>>A>>B>>C;
	if(A>B+C || B>A+C || C>A+B)
	cout<<"YES"<<endl;
	else if(A<B+C || B<A+C || C<A+B)
	cout<<"NO"<<endl;

	else
	cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
