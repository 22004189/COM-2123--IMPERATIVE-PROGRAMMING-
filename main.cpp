#include <iostream>

using namespace std;

int main()
{
    double merchandise,storeRent,employeesSalary,electricCost,netProfit,finalAmount
    ;
    double percent = 0.15;

    cout<<"Enter the total cost of merchandise: ";
    cin>>merchandise;
    cout<< "Enter the value of store rent:" ;
    cin>>storeRent;
    cout<<"Enter the total amount of salary of the employees:" ;
    cin>>employeesSalary;
    cout<<"Enter the total amount of electricity  cost:";
    cin>> electricCost;

    netProfit= merchandise*0.15 + employeesSalary +electricCost;

    cout<<"The total net profit is:"<<netProfit<<endl;

    return 0;
}
