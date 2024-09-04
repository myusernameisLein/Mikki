#ifndef SPENDINGINPUTSCREEN
#define SPENDINGINPUTSCREEN

#include "spendinglist.h"

class SpendingInputScreen
{
    private:
        SpendingList* ptrSpendingList; // запись о расходах
    public:
        SpendingInputScreen(SpendingList*);
        void setSpending();
};

#endif // SPENDINGINPUTSCREEN

