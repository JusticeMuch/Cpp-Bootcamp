#include <iostream>
#include <string>
#include "Zombie.hpp"

std::string randomName(int length) {

  char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
  char vowels[] = {'a','e','i','o','u','y'};

  std::string name = "";

  int random = rand() % 2;
  int count = 0;

  for(int i = 0; i < length; i++) {

    if(random < 2 && count < 2) {
      name = name + consonents[rand() % 19];
      count++;
    }
    else {
      name = name + vowels[rand() % 5];
      count = 0;
    }

    random = rand() % 2;

  }

  return name;

}

Zombie::Zombie() : name(randomName(6)), type("hacker"){
}

Zombie::~Zombie(){};

void    Zombie::announce(){
    std::cout << "<" << this->name << "(" << this->type << ") >  Braiiiiiiinnnssss..." << std::endl;
}