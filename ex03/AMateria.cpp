/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:42:20 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 17:55:20 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type) : _type(type) {}
AMateria::AMateria(AMateria const & other) : _type(other._type) {}
AMateria::~AMateria() {}
AMateria & AMateria::operator=(AMateria const & other) {
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}
std::string const & AMateria::getType() const {
    return this->_type;
}
void AMateria::use(ICharacter& target) {
    std::cout << "* uses " << this->_type << " on " << target.getName() << " *" << std::endl;
}
