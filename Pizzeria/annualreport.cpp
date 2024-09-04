//AnnualReport.cpp

#include "spendinglist.h"

class AnnualReport
{
    private:
        RentRecord* ptrRR; // записи доходов
        SpendingList* ptrSL; // записи расходов
        float expenses, rents; // суммы доходов и расходов
    public:
        AnnualReport(RentRecord*, SpendingList*);
        void display(); // отображение годового отчета
};
