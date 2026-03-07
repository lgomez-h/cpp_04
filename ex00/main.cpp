/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:39:54 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/18 21:40:00 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
    std::cout << "---- Animales correctos ----" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Tipo de j: " << j->getType() << std::endl;
    std::cout << "Tipo de i: " << i->getType() << std::endl;
    i->makeSound(); // Cat
    j->makeSound(); // Dog
    meta->makeSound(); // Animal

    delete meta;
    delete j;
    delete i;

    std::cout << "\n---- Animales incorrectos ----" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound(); // WrongAnimal (no es virtual)
    wrongMeta->makeSound(); // WrongAnimal

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
