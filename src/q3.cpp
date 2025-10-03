#include <iostream>
using namespace std;
class BankAccount{
    private:
    int balance, limit;
    char title[200];
    public:
    BankAccount() {}
    BankAccount(char title, int bal){}
    BankAccount(char title, int bal, int lim){}
}