/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:44:06 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 18:53:35 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog() : Animal() {
    objbrain = new Brain();
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &other) : Animal(other) {
    objbrain = new Brain(*other.objbrain); // Copia profunda
    type = other.type;
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog::~Dog() {
    delete objbrain;
    std::cout<<"Dog destructor called";}
Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
        type = other.type;
        if (objbrain)
            delete objbrain;
        objbrain = new Brain(*other.objbrain); // Copia profunda
        std::cout << "Dog assignment operator called" << std::endl;
    }
    return *this;
}
void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}
void Dog::setIdea(int index, const std::string &idea) {
    if (objbrain)
        objbrain->setIdea(index, idea);
    }
std::string Dog::getIdea(int index) const {
    if (objbrain)
        return objbrain->getIdea(index);
    return "";
}
