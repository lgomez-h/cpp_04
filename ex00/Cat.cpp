/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:58:43 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/18 17:57:53 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include "Animal.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
        std::cout << "Cat assignment operator called" << std::endl;
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
