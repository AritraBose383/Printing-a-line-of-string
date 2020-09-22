#include <iostream>
#include<sstream>
using namespace std;

int main() {
	string s;//cin>>s;
	getline(cin,s);
	cout<<s<<endl;
	stringstream str(s);
	string word;
	
	while(str>>word)//stores words present in string
	{
	    cout<<word<<endl;
	}
	
	return 0;
}