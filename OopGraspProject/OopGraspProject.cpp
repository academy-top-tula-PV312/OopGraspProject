#include <iostream>
#include <string>


class Animal
{
    std::string name;
public:
    Animal() {};
    Animal(std::string name) : name{ name } {};

    std::string& Name() { return name; }

    virtual std::string Voice() { return "???"; }
};

class Dog : public Animal
{
    std::string breed;
public:
    Dog(std::string name) : Animal(name) {};

    std::string Voice() override { return "gaff"; }
};

class Bird : public Animal
{
    double wingspan;
public:
    Bird(std::string name) : Animal(name) {};

    std::string Voice() override { return "chik-chirik"; }
    double& Wingspan() { return wingspan; }
};

int main()
{
    /*Animal animal;
    animal.Name() = "Kitty";*/
    //std::cout << animal.Name() << "\n";

    Animal* animals[3];

    animals[0] = new Animal("King Kong");
    animals[1] = new Dog("Lessi");
    animals[2] = new Bird("Govorun");

    //for (auto a : animals)
        //std::cout << a.Voice() << "\n";
        //std::cout << a.Name() << "\n";
    for(int i{}; i < 3; i++)
        std::cout << animals[i]->Voice() << "\n";


    /*((Bird*)animals[0])->Wingspan() = 1.5;
    std::cout << ((Bird*)animals[0])->Wingspan() << "\n";*/

    Animal* a1 = new Animal("A1");
    Animal* a2 = a1;
    a2->Name() = "A2";
    std::cout << a1->Name() << "\n";
}
