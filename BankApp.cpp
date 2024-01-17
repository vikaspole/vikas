#include<iostream>
using namespace std;
class Bank
{
	int account;
	char name[20];
	float balance;
public: void deposit(float ammount)
{
	balance += ammount;
}
public: void withdraw(float ammount)
{
	if (balance >= (ammount + 500))
	{
		balance -= ammount;
	}
	else
		cout << "Insufficient Balance." << endl;
}
public: void Balance()
{
	cout << "Balance is available inyour account:" << balance << endl;
}
public: void getdata()
{
	cout << "Enter the details" << endl;
	cout << "Account Number:" << endl;
	cin >> account;
	cout << "Name:" << endl;
	cin >> name;
	cout << "Balance is:" << endl;
	cin >> balance;
}
public: void display()
{
	cout << "Name of account holder:" << name << endl;
	cout << "Account number:" << account << endl;
	cout << "Balance is:" << balance << endl;
}
};
main()
{
	Bank myacc;
	myacc.getdata();
	myacc.display();
	cout << "Enter the ammount to be deposited:" << endl;
	float ammount;
	cin >> ammount;
	myacc.deposit(ammount);
	myacc.Balance();

}
