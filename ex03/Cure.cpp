/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:23:40 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 15:25:42 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other) {}

Cure::~Cure(){}

Cure& Cure::operator=(const Cure& other) {
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}
AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}