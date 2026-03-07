/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:43:50 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 17:10:33 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("") {
	std::cout << "AAnimal default constructor called" << std::endl;
	}

AAnimal::~AAnimal() {
	std::cout<<"AAnimal destructor called";
	}
AAnimal::AAnimal(const AAnimal &other) : type(other.type) {
	std::cout << "AAnimal copy called" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &other) {
    if (this != &other) {
        type = other.type;
        std::cout << "AAnimal operator assignament called" << std::endl;
    }
    return *this;
}
std::string AAnimal::getType() const {
    return type;
}
