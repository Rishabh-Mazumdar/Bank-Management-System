//                                                Bank Management System
#include<iostream>
#include<conio.h>

using namespace std;
class bank{
    private:
        char name[100];
        char address[100];
        char account[20];
        float balance = 0;
    public:
        void open_account();
        void deposite_money();
        void withdraw_money();
        void display_account();

};

void bank::open_account(){
    cout<<"Enter your full name: "<<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"\nEnter your full address: "<<endl;
    cin.ignore();
    cin.getline(address,100);
    cout<<"\nWhat type of account do you want to open for savings press (s) and for current press(c): "<<endl;
    cin.getline(account,20);
    cout<<"\nEnter the amount you want to deposite: "<<endl;
    cin>>balance;
    cout<<"\nCongratulations! Your account has been created and your money has been successfully deposited to your account.\n"<<endl;

}
void bank::display_account(){
    cout<<"\nYour full name as per records is: "<<name<<endl;
    cout<<"\nYour address as per records is: "<<address<<endl;
    cout<<"Type of account you have opened in our bank: "<<account<<endl;
    cout<<"\nTotal amount you have left in your account: "<<balance<<endl;

}
void bank::deposite_money(){
    float a;
    cout<<"\nHow much amount do you want to deposit: "<<endl;
    cin>>a;
    balance += a;
    cout<<"\nTotal amount you deposited: "<<balance<<endl;

}
void bank::withdraw_money(){
    float amount;
    cout<<"\nEnter the amount of money you want to withdraw: "<<endl;
    cin>>amount;
    balance -= amount;
    if(balance<0){
        cout<<"You don't that much money to withdraw from your acoount.";
    }else{
    cout<<"\nTotal amount left in your account is: "<< balance<<endl;
    }

}
int main(){
    int ch,x,n;
    bank obj;
    do{
        cout<<"1) Open Account "<<endl;
        cout<<"2) Deposit Money "<<endl;
        cout<<"3) Withdraw Money "<<endl;
        cout<<"4) Display Acoount "<<endl;
        cout<<"5) Exit"<<endl;
        cout<<"Select any option from above: "<<endl;
        cin>>ch;
        switch(ch){
            case 1 :"1) Open Account \n";
            obj.open_account();
            break;
            case 2:"2) Deposit Money \n";
            obj.deposite_money();
            break;
            case 3:"3) Withdraw Money \n";
            obj.withdraw_money();
            break;
            case 4:"4) Display Acoount \n";
            obj.display_account();
            break;
            case 5:
                if(ch == 5){
                    exit(1);
                }
            default:
            cout<<"\nThis doesn't exits try again."<<endl;
        }
        cout<<"\nIf you want to select another option then press :: y to continue."<<endl;
        cout<<"\nIf you want to exit then press :: N "<<endl;
        x=getch();
        if(x=='n' || x=='Y')
        exit(0);
    }while(x=='y' || x=='Y');

    getch();
    return 0;
}