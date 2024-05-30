#pragma once
#include <iostream>
#include <memory>
#include "toy.h"

class Dog
{
public:
    Dog(std::shared_ptr<Toy> toy) : lovelyToy(toy){};

    void getToy(std::shared_ptr<Toy> _toy)
    {
        if (_toy == nullptr)
        {
            std::cout << "Another dog is playing with this toy.\n";
        }
        if(lovelyToy == _toy)
           { std::cout << "I already have this toy.\n";
                }else{
                  lovelyToy=_toy;
                }
                std::cout << "Nothing to drop.\n";
    }
    void dropToy(std::shared_ptr<Toy> _toy)
    {
            if (lovelyToy != _toy)
            {
                std::cout << "I don't have a toy like that\n";
            }
            else
            {
                lovelyToy = _toy;
                lovelyToy.reset();
            }
        }
private :
std:: shared_ptr<Toy>lovelyToy;
};
