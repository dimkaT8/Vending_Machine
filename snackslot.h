#pragma once
#include "snack.h"

class SnackSlot
{
private:
    /// мах количество закуски в слоте
    int slot_size = 0 ;
    /// счетчик закуски
    short snacks_count = 0 ;
    Snack **snacks;
public:
    SnackSlot(int slotSize);
    ~SnackSlot();
    /// мах количество закуски в слоте
    unsigned int getSlotSize() const;
    /// количество закуски в слоте
    unsigned int getSlotFilled() const;
    unsigned int getEmptySlotCount() const;
    /// добавить закуску
    void addSnack(Snack* snack);
    /// закуска
    Snack *getSnack(int pos) const ;
};

