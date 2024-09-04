#ifndef SPENDINGLIST
#define SPENDINGLIST

#include "spending.h"

//Класс записей о затратах
class SpendingList
{
    private:
        vector<SpendingList*> vectPtrsSpending; //вектор указателей на расходы
        vector<SpendingList*>::iterator iter;
        public:
        ~SpendingList();
        void insertExp(Spending*);
        void display();
        float displaySummary(); // нужно для годового отчета
};

#endif // SPENDINGLIST

