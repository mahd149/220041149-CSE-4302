#include<bits/stdc++.h>
using namespace std;

class BankAccount
{
    private:
        int AccNumber;
        string Owner;
        bool AccType;
        double Balance;
        const double MinBalance = 200;

        static int TotalAccountsCreated;
        static int ActiveAccounts;
        static double TotalTaxCollected;

    public:
        BankAccount(int Num, string holder, bool acctype, double balance)
        {
            if (balance < MinBalance)
            {
                cout<<"Insufficient deposit ammount\n";

            }
            else 
            {
                AccNumber = Num;
                Owner = holder;
                AccType = acctype;
                Balance = balance;
                TotalAccountsCreated++;
                ActiveAccounts++;
            }
        }
        void Assign(int Num, string holder, bool acctype, double balance)
        {
            if (balance < MinBalance)
            {
                cout<<"Insufficient deposit ammount\n";

            }
            else 
            {
                AccNumber = Num;
                Owner = holder;
                AccType = acctype;
                Balance = balance;
            }
        }
        void Display() const
        {
            cout<<"Account number : "<<AccNumber<<'\n';
            cout<<"Account Holder : "<<Owner<<'\n';
            cout<<"Account type : ";
            if(AccType)
            {
                cout<<"Savings\n";

            }
            else cout<<"Current\n";
            cout<<"Current Balance : "<<Balance<<"\n";
            cout<<"\n\n";

        }
        void deposit(double x)
        {
            if(x<0)
            {
               cout<< "Invalid Ammount\n";
                return;
            }
            Balance += x;
        }
        void withdrawal( double x)
        {
            if(Balance < MinBalance)
            {
                cout<<"Insufficient Balance\n";
                return;
            }
            Balance -= x;

        }
        void giveInterest()
        {
            double tax = 0.1 * 0.03 * Balance;
            double interest = 0.3 * Balance;

            deposit(interest);
            withdrawal(tax);
            TotalTaxCollected +=tax;

            
        }
        void giveInterest( double i)
        {
            i= i/100.00;
            double tax = 0.1 * i * Balance;
            double interest = i * Balance;

            deposit(interest);
            withdrawal(tax);
            TotalTaxCollected +=tax;

            // Balance = Balance + interest - tax;
        }
        double getBalance() const
        {
            return Balance;
        }
        static int getTotalAccCreated()
        {
            return TotalAccountsCreated;
        }
        static int getActiveacc()
        {
                return ActiveAccounts;
        }
        static double taxCollected()
        {
            return TotalTaxCollected;
        }
        ~BankAccount()
        {
            cout<<"Account of "<<Owner<<" with account no "<<AccNumber<<" is being destroyed with a balance BDT "<< Balance<<" \n\n";
            ActiveAccounts--;
        }
};
void display_stat()
{
    cout<<"Total account created : "<<BankAccount::getTotalAccCreated()<<endl;
    cout<<"total active accounts : "<<BankAccount::getActiveacc()<<endl;
    cout<<"total tax collected : "<<BankAccount::taxCollected()<<endl;
    cout<<"\n\n";

}
int BankAccount::TotalAccountsCreated = 0;
int BankAccount::ActiveAccounts = 0;
double BankAccount::TotalTaxCollected = 0.0;

const BankAccount& Larger ( const BankAccount& A, const  BankAccount& B)
{
    if (A.getBalance() > B.getBalance())
        return A;
    else return B;
}



int main()
{
    BankAccount acc1(1001, "Maddy", true, 5000);
    BankAccount acc2(1002, "Jesu", false, 3000);

   
    acc1.Display();
    acc2.Display();

    
    acc1.giveInterest();
    acc2.giveInterest(5); 
    
    acc1.Display();
    acc2.Display();

   
    display_stat();

    // BankAccount larger = Larger(acc1, acc2);
   cout << "The account with the larger balance is: " << endl;
    Larger(acc1, acc2).Display();
    

    cout<<"\n\n";

}