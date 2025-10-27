#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie newz(name);
    newz.announce();
}