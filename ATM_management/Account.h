#pragma once
class Account
{
protected:
    int balance;
public:
    Account(int initial)
    {
        balance = initial;
    }
    int getBalance()
    {
        return balance;
    }
    void setBalance(int newBalanace)
    {
        balance = newBalanace;
    }
};