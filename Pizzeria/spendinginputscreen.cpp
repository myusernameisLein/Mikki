#include "spendinginputscreen.h"
// конструктор

SpendingInputScreen::SpendingInputScreen(SpendingRecord* per) : ptrSpendingRecord(per)
{
/*пусто*/
}

void SpendingInputScreen::setSpending()
{
    cout << "Введите месяц (1-12): ";
    getaLine(SpendingMonth);

    cout << "Введите день (1-31): ";
    getaLine(SpendingDate);

    cout << "Введите категорию расходов (Ремонт, Налоги): ";
    getaLine(SpendingCategory);

    cout << "Введите сумму (39.95): ";
    getaLine(SpendingAmount);

    // создаем новый расход
    Spending* ptrSpending = new Spending(SpendingMonth, SpendingDate, SpendingCategory, SpendingAmount);
    // вставляем расход в список всех расходов
     ptrSpendingList->insertSpend(ptrSpending);
}
