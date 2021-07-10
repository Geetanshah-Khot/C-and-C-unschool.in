#include <iostream>

using namespace std;

class atm
{
    float Balance = 1000.00;
    int pin_no, option,in_option;
    float amount;
public :
    atm()
    {
        cout << "**************Welcome To Your ATM**************" << endl << endl;
        cout << "\nEnter Ur Pin No. Please :\n";
        cin >> pin_no;
        cout << "\nEnter any option to be served !";
        cout << "\n1) Balance Enquiry" << endl;
        cout << "\n2) Cash Withdraw" << endl;
        cout << "\n3) Deposit Cash" << endl;
        cout << "\n4) Exit" << endl;
        cout << "\nEnter ur choice : ";
        cin >> option;
        if(option == 1)
        {
            cout << "\nYour bank balance is : 1000.00000 ";
        }
        else if(option == 2)
        {
            cout << "\nEnter the amount for Withdrawl :" << endl;
            cin >> amount;
            Balance = Balance - amount;
            cout << " \nPlease collect ur Cash !!! " << endl;
            cout << "\nBalance withdrawl successful!!!. Your available balance is " << Balance << endl;
        }
        else if (option == 3)
        {
            cout << "\nPlease enter the amount u want to deposit :" << endl;
            cin >> amount;
            Balance = Balance + amount;
            cout << "\nYour current available Cash is :" <<Balance <<endl;
        }
        else (option == 4);
        {
            cout << "\nThank u for Banking us, have a nice day!";
            exit;
        }
    }
void get()
{
    cout <<"\n Do u want another transaction?" << endl;
    cout <<"\n Press 1 TO PROCEED :" << endl;
    cin >> in_option;
    if(in_option = 1)
    {

        system("CLS");
        atm();
    }
    else
        exit;
};

};

int main()
{
    atm amt;
    amt.get();
    return 0;
}
