#include "snackslot.h"
SnackSlot::SnackSlot(int slotSize)
{
    this->slot_size = slotSize;
    this->snacks = new Snack*[slotSize]{};
}

SnackSlot::~SnackSlot()
{
    delete[] snacks;
}

unsigned int SnackSlot::getSlotSize() const
{
    return slot_size ;
}

unsigned int SnackSlot::getSlotFilled() const
{
    return snacks_count ;
}

unsigned int SnackSlot::getEmptySlotCount() const
{
    return slot_size - snacks_count ;
}

void SnackSlot::addSnack(Snack *snack)
{
    if(slot_size > snacks_count){
        snacks[snacks_count] = snack;
        ++snacks_count;
    } else cout << " Слот " << snack->getname() << " заполнен !" << endl;
}

Snack *SnackSlot::getSnack(int pos) const
{
    return snacks[pos];
}
