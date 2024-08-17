#include<iostream>
using namespace std;

class Bank
{
    private:
    char name[40],acctype[40];
    int bal,accno;
    public:
    Bank()
    {
        cout<<"Enter Account name =";
        cin.getline(name,40);
        cout<<"Enter account type =";
        cin.getline(acctype,40);
        cout<<"Enter account no. =";
        cin>>accno;
        cout<<"Enter openning balance =";
        cin>>bal;
    }
    void diposit(int amt)
    {
    bal = bal + amt;
    cout<<"Balance after deposit:"<<bal<<endl;
    
    }
    void withdraw(int amt)
    {
        if (amt > bal)
        cout<<"Sorry your balance is less than ammount...."<<endl;
        else
        bal = bal - amt;
        cout<<"Balance after withdraw:"<<bal<<endl;
         
    }
    void display()
{
    cout<<"---------Account Detail----------"<<endl;
    cout<<"Account Name :"<<name<<endl;
    cout<<"Account Type :"<<acctype<<endl;
    cout<<"Account No :"<<accno<<endl;
    cout<<"Current Balance :"<<bal<<endl;
}
};

int main()
{
    Bank objBank;
    int ammount,choice;
    do{
         
        cout<<"---------Main Manu--------"<<endl;
        cout<<"1:- Deposit Money"<<endl;
        cout<<"2:- Withdraw Money"<<endl;
        cout<<"3:- Display Account Derail"<<endl;
        cout<<"4:- Quit"<<endl;
        cout<<"Enter any choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
           cout<<"Enter ammount to deposit:";
           cin>>ammount;
           objBank.display();
           break;
        case 2:
           cout<<"Enter ammount to withdraw:";
           cin>>ammount;
           objBank.withdraw(ammount);
           break;
        case 3:
            objBank.display();
            break;
        case 4:
             exit(0);

        }
    }
    while(1);
}


//////////////////////////////// I AM THE BOSS ////////////////////////////////