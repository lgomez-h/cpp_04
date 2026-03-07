/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:10:14 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 17:30:23 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}   

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called  no llama a WrongCat porque"<<
    "no es virtual el destructor"<< std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "Some generic wrong animal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}
