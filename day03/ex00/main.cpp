#include <iostream>
#include <string>
#include "FragTrap.hpp"

int main(void){
    FragTrap billy;
    FragTrap john("John");
    billy.takeDamage(50);
    billy.beRepaired(30);
    john.meleeAttack("Billy");
    john.rangedAttack("Billy");
    john.vaulthunter_dot_exe("Billy");
    john.vaulthunter_dot_exe("Jack");
    john.vaulthunter_dot_exe("Sam");
    john.vaulthunter_dot_exe("Peter");
    john.vaulthunter_dot_exe("Julia");
    return (0);
}