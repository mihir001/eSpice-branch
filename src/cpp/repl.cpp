#include<iostream>
#include<string>
#include"parse.hpp"
#include"eval.hpp"
#include"help.cpp"
#include"eval.cpp"

using namespace std;

int main()
{
	string s;
	char ch;
	node* t;
	do
	{
		cout<<"Enter string --> ";
		cin>>s;
		if(s=="help")
			help();
		else{
			int x = s.length();
			t = parse(s,x);
			if(t==NULL)
                cout<<"INVALID COMMAND";
            else
                evaluate(t);
            cout<<"\nDo you want to enter another string(Y/N) --> ";
            cin>>ch;
		}
	}while(ch=='Y'||ch=='y');
	return 0;
}
