#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int dol,amount,ch,rs,n;
    

    cout<<"Enter the value of Dollar=";
    cin>>n;
    cout<<"1.Dollar to Rupees"<<endl;
    cout<<"2.Rupees to Dollar"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
    
switch(ch)
{
    case 1: cout<<"\nEnter amount in Dollar=";
            cin>>dol;
            amount=dol*n;
            cout<<"Amount in Rupees="<<amount;
            break;
    case 2: cout<<"\nEnter amount in Rupees=";
            cin>>rs;
            amount=rs/n;
            cout<<"Amount in Dollar="<<amount;
            break;
    default: cout<<"invalid choice";
}
getch();
return 0;
}

