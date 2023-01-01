#include <iostream>
#include "vendingmachine.h"

void slot_cout(VendingMachine *m , int pos)
{
    cout << "  Название : " <<m->getSnackSlot(pos)->getSnack(0)->getname() << ",  Количестово калорий : " << m->getSnackSlot(pos)->getSnack(0)->getclories();
    cout << ",   Цена : " << m->getSnackSlot(pos)->getSnack(0)->getprice() << endl ;
    cout << "  пустых ячеек : " << m->getSnackSlot(pos)->getEmptySlotCount() << endl << endl;
}
int main()
{
    Snack *bounty = new Snack("Bounty", 34 , 3.2);
    Snack *snickers = new Snack("Snickers", 22 , 3.4);
    Snack *mars = new Snack("Mars", 32 , 3.1);

    SnackSlot *bounty_slot = new SnackSlot(10);
    for(int i=0 ;i < 9 ; i++) bounty_slot->addSnack(bounty);

    SnackSlot *snickers_slot = new SnackSlot(10);
    for(int i=0 ; i < 4 ; i++) snickers_slot->addSnack(snickers);

    SnackSlot *mars_slot = new SnackSlot(10);
    for(int i=0 ; i < 7 ; i++) mars_slot->addSnack(mars);

    VendingMachine *machine = new VendingMachine(4);
    machine->addSlot(&mars_slot);

    cout << "Slot Mars :" << endl;
    slot_cout( machine , 0);

    machine->addSlot(&snickers_slot);
    cout << "Slot Snickers :" << endl;
    slot_cout( machine , 1);

    machine->addSlot(&bounty_slot);
    cout << "Slot Bounry :" << endl;
    slot_cout( machine , 2);

    cout << "Пустых слотов в машине : " << machine->getEmptySlotsCount() << endl;

    delete bounty;
    delete snickers;
    delete mars;
    delete bounty_slot;
    delete snickers_slot;
    delete mars_slot;
    delete machine;

    return 0;
}
