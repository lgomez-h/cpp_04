/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:44:06 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 17:11:15 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout<<"Dog destructor called";
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other) {
        Animal::operator=(other);
        std::cout << "Dog assignment operator called" << std::endl;
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}
