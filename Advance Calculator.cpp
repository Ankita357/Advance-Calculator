//Create Advance Calculator in C++.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    p:
	system("cls");
	int a,b,choice;
	float x,y;
	char c;
	cout<<"\n\n\n\t\tControl Panel";
	cout<<"\n\n 1. ADD";
	cout<<"\n\n 2. Substract";
	cout<<"\n\n 3. Multiply";
	cout<<"\n\n 4. Divide";
	cout<<"\n\n 5. Modulus";
	cout<<"\n\n 6. Exit";
	cout<<"\n\n Your Choice :";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\n\n\t";
			cin>>x>>c;
			while(c == '+')
			{
				cin>>y;
				x += y;
				cin>>c;
			}
			cout<<"\n\n\tYour Answer is : "<<x;
		break;
		case 2:
			cout<<"\n\n\t";
			cin>>x>>c>>y;
			x -= y;
			cout<<"\n\n\tYour Answer is : "<<x;
		break;
		case 3:
			cout<<"\n\n\t";
			cin>>x>>c;
			while(c == '*')
			{
				cin>>y;
				x *= y;
				cin>>c;
			}
			cout<<"\n\n\tYour Answer is : "<<x;
		break;
		case 4:
			cout<<"\n\n\t";
			cin>>x>>c>>y;
			x /= y;
			cout<<"\n\n\n\tYour Answer is : "<<x;
		break;
		case 5:
			cout<<"\n\n\t";
			cin>>a>>c>>b;
			a %= b;
			cout<<"\n\n\n\tYour Answer is : "<<a;
		break;
		case 6:
			exit(0);
		default:
			cout<<"\n\n\tTnvalid Value...Please Try Again...";
	}
	getch();
	goto p;
}

