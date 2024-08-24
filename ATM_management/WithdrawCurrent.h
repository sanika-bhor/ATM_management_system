#pragma once
#include<iostream>
#include<iomanip>
#include "Account.h"
using namespace std;

class WithdrawCurrent : public Account
{
protected:
    int withdrawAmount;
    int remainingBalance;
public:
    WithdrawCurrent(int initial) :Account(initial) {};
    int withdrawBalance();
};
