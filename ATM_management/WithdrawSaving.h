#pragma once

#include<iostream>
#include<iomanip>
#include "Account.h"
using namespace std;

class WithdrawSaving : public Account
{
protected:
    int withdrawAmount;
    int remainingBalance;
public:
    WithdrawSaving(int initial) :Account(initial) {};
    int withdrawBalance();
};
