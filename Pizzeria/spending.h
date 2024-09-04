#ifndef SPENDING
#define SPENDING

#include "libs.h"

class Spending
{
    public:
        int month, day; // месяц и день уплаты расходов
        string category; // категория расходов (газ, свет, ремонт и тд)
        float amount; // сколько платим
        Spending()
        { }

        Spending(int m, int d, string c, string p, float a) :
        month(m), day(d), category(c), amount(a)

        {}
        ~Spending();
        //геттеры:
        int GetMonth();
        int GetDay();
        string GetCategory();
        float GetAmount();

};

#endif // SPENDING

