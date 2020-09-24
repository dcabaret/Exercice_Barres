#include <iostream>
#include "barre.h"
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarre.h"

using namespace std;

int main()
{
    float masse;
    float section;

    BarreRonde uneBarre("Barre1", 10, 2.74, "Aluminium", 15);
    uneBarre.afficherCaracteristiques();
    masse = uneBarre.CalculerMasse();
    section = uneBarre.CalculerSection();
    cout << "Section : " << section << endl;
    cout << "Masse : " << masse << endl << endl;

    BarreCarre uneBarre2("Barre2", 30, 7.8, "Acier", 10);
    uneBarre2.afficherCaracteristiques();
    masse = uneBarre2.CalculerMasse();
    section = uneBarre2.CalculerSection();
    cout << "Section : " << section << endl;
    cout << "Masse : " << masse << endl << endl;

    BarreRectangle uneBarre3("Barre3", 50, 8.92, "Cuivre", 25, 13);
    uneBarre3.afficherCaracteristiques();
    masse = uneBarre3.CalculerMasse();
    section = uneBarre3.CalculerSection();
    cout << "Section : " << section << endl;
    cout << "Masse : " << masse << endl;

    return 0;
}
