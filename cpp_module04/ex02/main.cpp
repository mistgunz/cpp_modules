#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
   AAnimal* meta = new Dog();
  meta->makeSound();	
}