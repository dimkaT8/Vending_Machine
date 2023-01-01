#pragma once

#include <string>
#include <iostream>
using namespace std;

class Snack
{
private:
    /// имя закуски
    string sneck_name;
    /// количество калорий в закуске
    unsigned short calories;
    /// цена закски
    double price;

public:
    Snack(const string sneck_name ,const unsigned short calories , const double price );
    Snack(const string sneck_name ,const unsigned short calories );
    Snack(const string sneck_name );
    /// запрос имени закуски
    string getname() const;
    /// запрос калорий закуски
    unsigned short getclories() const;
    /// запрос цены закуски
    double getprice() const;
    /// ввод новой цены закски
    void setprice(double price);

    ~Snack();
};

