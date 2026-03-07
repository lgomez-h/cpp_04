/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:58:43 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 18:52:19 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>
#include "Animal.hpp"

Cat::Cat() : Animal() {
    objbrain = new Brain();
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat &other) : Animal(other) {
    objbrain = new Brain(*other.objbrain);
    type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat::~Cat() {
    delete objbrain;
    std::cout << "Cat destructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
        type = other.type;
        if (objbrain)
            delete objbrain;
        objbrain = new Brain(*other.objbrain); // Deep copy
        std::cout << "Cat assignment operator called" << std::endl;
    }
    return *this;
}
void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
void Cat::setIdea(int index, const std::string &idea) {
    if (objbrain)
        objbrain->setIdea(index, idea);
}
std::string Cat::getIdea(int index) const {
    if (objbrain)
        return objbrain->getIdea(index);
    return "";
}

