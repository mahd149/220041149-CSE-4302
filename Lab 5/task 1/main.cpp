#include<bits/stdc++.h>
#include<string>
#include "SavingsAccount.h"

using namespace std;

void EditByKey(SavingsAccount& a)
{
    string name, address;
    double annintrate, currbalaance, minbalance;
    cout<<"Enter Name : ";
    getline(cin, name);
    cin.ignore();

    cout<<"Enter address : ";
    getline(cin, address);
    
    cout<<"Annual interest rate : ";
    cin>>annintrate;
    cout<<"Deposit ammount : ";
    cin>>currbalaance;
    cin.ignore();
    minbalance = currbalaance;
    a.setName(name);
    a.setAddress(address);
    a.setAnnIntRate(annintrate);
    a.setBalance(currbalaance);

}
void generateRandomInfo(SavingsAccount& a)
{
    a.setName("Random");
    a.setAddress("Dhaska");
    a.setAnnIntRate(3.0);
    a.setBalance(10000.0);
}

void showAlphabetically(SavingsAccount& arr)
{

}

void showInterestAll(SavingsAccount&  arr)
{
    int a;
    cout<<"Period in months : ";
}

int main()
{
    SavingsAccount arr[100];
    for (int i=0; i<2; i++)
    {
        EditByKey(arr[i]);
    }
    for(int i=2; i<100; i++)
    {
        generateRandomInfo(arr[i]);
    }

}