

#include "Zombie.hpp"

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(): name("Unnamed Zombie") {}

Zombie::Zombie(std::string n): name(n) {}

Zombie::~Zombie(void) {
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::Set_name(std::string n) {
    name = n;
}
