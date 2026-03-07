/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:13:25 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/22 09:44:21 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i)
        _materias[i] = NULL;
}
MateriaSource::MateriaSource(MateriaSource const & other) {
    for (int i = 0; i < 4; ++i) {
        if (other._materias[i])
            _materias[i] = other._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}
MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        delete _materias[i];
    }
}
MateriaSource & MateriaSource::operator=(MateriaSource const & other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete _materias[i];
            if (other._materias[i])
                _materias[i] = other._materias[i]->clone();
            else
                _materias[i] = NULL;
        }
    }
    return *this;
}
void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!_materias[i]) {
            _materias[i] = m;
            return;
        }
    }
    std::cout << "Materia source is full, cannot learn " << m->getType() << std::endl;
    delete m;
}
AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i) {
        if (_materias[i] && _materias[i]->getType() == type) {
            return _materias[i]->clone();
        }
    }
    std::cout << "Materia of type " << type << " not found in source." << std::endl;
    return NULL;
}
