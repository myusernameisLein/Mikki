#ifndef SPENDINGINPUTSCREEN
#define SPENDINGINPUTSCREEN

#include "spendinglist.h"

class SpendingInputScreen
{
    private:
        SpendingList* ptrSpendingList; // запись о расходах
        string SpendingCategory; // категория расходов (газ, свет, ремонт и тд)
        string SpendingName; //название расхода
        string SpendingMonth; // месяц уплаты расходов
        string SpendingDate; // дата уплаты расходов
        float SpendingAmount; // сколько платим
    public:
        SpendingInputScreen(SpendingList*);
        void setSpending();
};


#endif // SPENDINGINPUTSCREEN

