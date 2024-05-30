#pragma once

class Toy
{
public:
    Toy(const std::string &_name) : name(_name){};
    
    std::string getName()
    {
        return name;
    }
    ~Toy()
    {
        std::cout << "Toy " << name << " was dropped " << std::endl;
    }
private:
    std::string name;
};
