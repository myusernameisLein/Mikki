#include "spending.h"

Spending::~Spending() // деструктор
{ }

string Spending::GetMonth()
{
    return month;
}

string Spending::GetDay()
{
    return day;
}

string Spending::GetCategory()
{
    return category;
}

float Spending::GetAmount()
{
    return amount;
}
