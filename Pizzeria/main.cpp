#include "Pizza.h"

using namespace std;

int main()
{
    //Функция setlocale() задаёт локализацию программы.
    setlocale(LC_ALL, "rus");
    UserInterface theUserInterface;
    theUserInterface.interact();
    return 0;

}

