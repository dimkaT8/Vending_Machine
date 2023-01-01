#pragma once
#include "snackslot.h"

class VendingMachine
{
private:
    /// мах количество слотов
    int machine_size = 0;
    /// счетчик слотов
    int machine_count = 0 ;
    SnackSlot ***machine_snacks;
public:
    VendingMachine(int machinesize);
    ~VendingMachine();
    /// мах количество слотов
    unsigned int getMachineSlotsSize() const;
    /// количество слотов
    unsigned int getMachineSlotsFilled() const;
    /// количестово пустых слотов в машине
    unsigned int getEmptySlotsCount() const;
    /// добавить закуску
    void addSlot(SnackSlot **slots);
    /// слот
    SnackSlot *getSnackSlot(int pos) const;
};

