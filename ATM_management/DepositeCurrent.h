#pragma once
#include<iostream>
#include<iomanip>
#include "Account.h"
using namespace std;

class DepositeCurrent :public Account
{
protected:
    int depositeAmount;
    int newBalance;
public:
    DepositeCurrent(int initial) :Account(initial) {};
    void depositeBalance();
};