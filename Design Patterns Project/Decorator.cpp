#include <iostream>
#include <string>
using namespace std;

enum class Size { S = 80, M = 180, L = 280, XXL = 500 };

class Drink abstract 
{
protected:
    Size size;
    double price;
    string description;

public:
    Size getSize() const
    {
        return size;
    }

    double getPrice() const
    {
        return price;
    }

    string getDescription() const
    {
        return description;
    }

    void print() const
    {
        cout << description << " = " << price << "L.E\n";
    }
};

class Tea : public Drink
{
public:
    Tea(Size size)
    {
        this->size = size;
        description = "Tea ";

        if (size == Size::M) price = 10; 
        else if (size == Size::S) price = 5; 

        else if (size == Size::L) price = 15; 
        else if (size == Size::XXL) price = 20; 
       
    }
};

class GreenTea : public Drink
{
public:
    GreenTea()
    {
        // size = ...
        description = "Green tea";
        price = 45;
    }
};

class Espresso : public Drink
{
public:
    Espresso(Size size)
    {
        this->size = size;
        description = "Espresso Cup";
        if (size == Size::S) price = 20;
        else if (size == Size::M) price = 30;
        else if (size == Size::L) price = 40;
        else if (size == Size::XXL) price = 40;
    }
};

////////////////////////////////////////////////////////////////


class Condiment abstract : public Drink 
{
protected:
    Drink* drink; 
};


class MilkCondiment : public Condiment
{
public:
    MilkCondiment(Drink* drink)
    {
        this->drink = drink; 
        description = this->drink->getDescription() + " + Milk (3 L.E.)";
        price = this->drink->getPrice() + 3;
    }

    MilkCondiment() 
    {
        this->drink = this;
        description = "glass of milk";
        price = 10;
    }
};

class ChocolateCondiment : public Condiment
{
public:
    ChocolateCondiment(Drink* drink)
    {
        this->drink = drink;
        description = this->drink->getDescription() + " + Chocolate (5 L.E)";
        price = this->drink->getPrice() + 5;
    }
};

class SugarCondiment : public Condiment
{
public:
    SugarCondiment(Drink* drink)
    {
        this->drink = drink;
        description = this->drink->getDescription() + " + Sugar (1 L.E)";
        price = this->drink->getPrice() + 1;
    }
};

