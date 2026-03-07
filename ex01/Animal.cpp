/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:43:50 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 17:10:33 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout<<"Animal destructor called";
}

Animal::Animal(const Animal &other) : type(other.type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        type = other.type;
        std::cout << "Animal assignment operator called" << std::endl;
        }
    return *this;
}

std::string Animal::getType() const {
    return type;
}  

void Animal::makeSound() const {
   std::cout << "Some generic animal sound!" << std::endl;
}
