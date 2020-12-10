#include <iostream>

using namespace std;

class bankAccount
{
    public:
        bankAccount();
        void deposit(float);
        void withDrawl();
        float getBalance();

    private:
    float balance;
};

bankAccount::bankAccount()
{
    balance = 0;
}

float bankAccount::getBalance()
{
    return balance;
}

void bankAccount::deposit(float depo)
{
    balance = balance + depo;
}

int main()
{
    bankAccount checking;
    bankAccount saving;
    checking.deposit(100);
    saving.deposit(700);
    cout << "Your checking balance is: " << checking.getBalance() << endl;;
    cout << "Your saving balance is: " << saving.getBalance() << endl;
}