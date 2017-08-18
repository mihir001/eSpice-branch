#include<iostream>
#include<string>
using namespace std;
void help()
{
	cout<<"1)  \'+\' "<<endl;
	cout<<"2)  \'-\' "<<endl;
	cout<<"3)  \'>\' "<<endl;
	cout<<"4)  \'<\' "<<endl;
	cout<<"5)  \']\' "<<endl;
	cout<<"6)  \'[\' "<<endl;
	cout<<"7)  \',\' "<<endl;
	cout<<"8)  \'.\' "<<endl;
	cout<<"9)  \'sq\'"<<endl;
	cout<<"10) \'sr\'"<<endl;
	cout<<"11) \'fact\' "<<endl;
	cout<<"12)  QUIT "<<endl;

	int ch;

	do
	{
		cout<<"\n\nEnter token number(1-12) --> ";
		cin>>ch;

		switch (ch)
		{
			case 1: cout<<"\n\'+\' --> increments (increase by one) the byte at the data pointer. ";
					break;
			case 2: cout<<"\n\'-\' --> decrements (decrease by one) the byte at the data pointer. " ;
					break;
			case 3: cout<<"\n\'>\' --> increments the data pointer (to point to the next cell to the right). ";
					break;
			case 4: cout<<"\n\'<\' --> decrements the data pointer (to point to the next cell to the left). ";
					break;
			case 5: cout<<"\n\'[\' --> if the byte at the data pointer is zero, then instead of moving the instruction pointer \n";
					cout<<"         forward to the next command, jumps it forward to the command after the matching ] command. ";
					break;
			case 6: cout<<"\n\']\' --> if the byte at the data pointer is nonzero, then instead of moving the instruction pointer\n ";
					cout<<"         forward to the next command, jumps it back to the command after the matching [ command. ";
					break;
			case 7: cout<<"\n\',\' --> accepts one byte of input, storing its value in the byte at the data pointer. ";
					break;
			case 8: cout<<"\n\'.\' --> outputs the byte at the data pointer. ";
					break;
			case 9: cout<<"\n\'sq\' --> squares the byte at the data pointer. ";
					break;
			case 10: cout<<"\n\'sr\' --> stores the floor of the square root of the value at the data pointer. "<<endl;
					break;
			case 11: cout<<"\n\'fact\' --> stores the factorial of the byte at the data pointer. "<<endl;
					break;
			case 12: cout<<"\nExiting Help .... ";
					break;

			default: cout<<"\nInvalid number.";
                    break;
		}
	} while(ch!=12);
}

