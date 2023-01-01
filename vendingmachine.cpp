#include "vendingmachine.h"

VendingMachine::VendingMachine(int machinesize)
{
    this->machine_size = machinesize;
    this->machine_snacks = new SnackSlot**[machinesize];
}

VendingMachine::~VendingMachine()
{
    delete[] machine_snacks;
}

unsigned int VendingMachine::getMachineSlotsSize() const
{
    return machine_size ;
}

unsigned int VendingMachine::getMachineSlotsFilled() const
{
    return machine_count ;
}

unsigned int VendingMachine::getEmptySlotsCount() const
{
    return machine_size - machine_count ;
}

void VendingMachine::addSlot(SnackSlot **slots)
{
    if(machine_size > machine_count){
        machine_snacks[machine_count]=slots;
        ++machine_count;
    } else cout << " Машина заполнена !" << endl;
}

SnackSlot *VendingMachine::getSnackSlot(int pos) const
{
    return *machine_snacks[pos];
}
