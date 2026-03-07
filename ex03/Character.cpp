/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:04:49 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/22 09:48:06 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>


Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; ++i)
        _inventory[i] = NULL;
}
Character::Character(Character const & other) : _name(other._name) {
    for (int i = 0; i < 4; ++i) {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}
Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        delete _inventory[i];
    }
}
Character & Character::operator=(Character const & other) {
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; ++i) {
            delete _inventory[i];
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return *this;
}
std::string const & Character::getName() const {
    return _name;
}
void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!_inventory[i]) {
            _inventory[i] = m;
            return;
        }
    }
    std::cout << "Inventory is full, cannot equip " << m->getType() << std::endl;
    delete m;
}
void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4 || !_inventory[idx]) {
        std::cout << "Invalid index or no materia to unequip at index " << idx << std::endl;
        return;
    }
    _inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4 || !_inventory[idx]) {
        std::cout << "Invalid index or no materia to use at index " << idx << std::endl;
        return;
    }
    _inventory[idx]->use(target);
}
AMateria* Character::getMateria(int idx) const {
    if (idx < 0 || idx >= 4) {
        std::cout << "Invalid index: " << idx << std::endl;
        return NULL;
    }
    return _inventory[idx];
}
