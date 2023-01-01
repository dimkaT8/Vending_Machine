#include "snack.h"

Snack::Snack(const string sneck_name, const unsigned short calories, const double price)
{
    this->sneck_name = sneck_name;
    this->calories = calories;
    this->price = price;
}

Snack::Snack(const string sneck_name, const unsigned short calories)
{
    this->sneck_name = sneck_name;
    this->calories = calories;
}

Snack::Snack(const string sneck_name)
{
    this->sneck_name = sneck_name;
}

string Snack::getname() const
{
    return this->sneck_name ;
}

unsigned short Snack::getclories() const
{
    return this->calories ;
}

double Snack::getprice() const
{
    return this->price ;
}

void Snack::setprice(double price)
{
    this->price = price ;
}

Snack::~Snack()
{

}
