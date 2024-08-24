#pragma once

#include<iostream>
#include<iomanip>
#include "Account.h"
using namespace std;

class DepositeSaving :public Account
{
protected:
    int depositeAmount;
    int newBalance;
public:
    DepositeSaving(int initial) :Account(initial) {};
    void depositeBalance();
};