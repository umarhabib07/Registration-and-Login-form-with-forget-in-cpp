#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string name,un;
	string password,month,day,year,pa,da,mo,ye;
	int n;
	b_m:
	n_p:
	b_menu:
	cout<<" \n\t\t\tPRESS 1 for Register "<<endl;
	cout<<" \n\t\t\tPRESS 2 for Login "<<endl;
	cout<<" \n\t\t\tPRESS 3 for forget password "<<endl;
	n=getch();
	if(n==49)
	{
		ofstream file1("name file.txt", ios::out);
		cout<<"\n Please Enter Name =";
		cin>>name;
		file1<<name;
		ofstream file2("Date file.txt", ios::out);
		cout<<" \nPlease Enter Date Of Birth "<<endl;
		cout<<" \nEnter Date =";
		cin>>day;
		file2<<day;
		ofstream file3("Month file.txt", ios::out);
		cout<<" \nEnter Month =";
		cin>>month;
		file3<<month;
		ofstream file4("Year file.txt", ios::out);
		cout<<" \nEnter Year =";
		cin>>year;
		file4<<year;
		ofstream file5("password file.txt", ios::out);
		cout<<" \nPlease Enter Password =";
		cin>>password;
		file5<<password;
		system("cls");
		cout<<"\n\n \t\t    Your Registration Complete..."<<endl<<endl;
		goto b_m;
	}
	else if(n==50)
	{
		ifstream file1("name file.txt", ios::in);
		file1>>name;
		ifstream file5("password file.txt", ios::in);
		file5>>password;
		na:
		cout<<"\n Please Enter Name =";
		cin>>un;
		p:
		cout<<" \nPlease Enter Password =";
		cin>>pa;
		if(un==name)
		{
			if(pa==password)
			{
				cout<<" WELCOME ";
			}
			else
			{
				cout<<" \n\nPassword not match so Please try again "<<endl;
				goto p;
			}
		}
		else
		{
			cout<<" \n\nName not match so please Try again "<<endl;
			goto na;
		}
	}
	else if(n==51)
	{
		ifstream file1("name file.txt", ios::in);
		file1>>name;
		ifstream file2("Date file.txt", ios::in);
		file2>>day;
		ifstream file3("Month file.txt", ios::in);
		file3>>month;
		ifstream file4("Year file.txt", ios::in);
		file4>>year;
		d_n:
		cout<<"\n\n Please enter name =";
		cin>>un;
		if(un==name)
		{
			cout<<" \n\nEnter Date of birth "<<endl;
			d_da:
			cout<<" \nEnter Date =";
			cin>>da;
			if(da==day)
			{
				d_mo:
				cout<<"\nEnter Month =";
				cin>>mo;
				if(mo==month)
				{
					d_ye:
					cout<<"\nEnter Year =";
					cin>>ye;
					if(ye==year)
					{
						ofstream file5("password file.txt", ios::out);
						cout<<"\nEnter New Password =";
						cin>>password;
						file5<<password;
						system("cls")	;
						cout<<" \n\n\t\t     New Password created..."<<endl;
						goto n_p;
					}
					else
					{
						cout<<" \nyou enter wrong Year"<<endl;
						cout<<" \ntry again "<<endl;
						goto d_ye;
					}
				}
				else
				{
					cout<<" \nyou enter wrong Month"<<endl;
					cout<<" \ntry again "<<endl;
					goto d_mo;
				}
			}
			else
			{
				cout<<" \nyou enter wrong Day"<<endl;
				cout<<" \ntry again "<<endl;
				goto d_da;
			}
		}
		else
		{
			cout<<" \nyou enter wrong name"<<endl;
			cout<<" \ntry again "<<endl;
			goto d_n;
		}	
	}
	else
	{
		system("cls");
		cout<<" \t\t\tYou Enter Wrong Button ..."<<endl;
		cout<<" \n\t\t\tTry Again...."<<endl;
		cout<<"\n\t\t      *****************************"<<endl<<endl;
		goto b_menu;
	}
	cout<<endl;                     
	cout<<endl;                     
}
