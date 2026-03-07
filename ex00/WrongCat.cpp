/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:09:57 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/18 22:41:28 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

    WrongCat::WrongCat() {
        std::cout << "WrongCat constructor called" << std::endl;
    }

    WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
        std::cout << "WrongCat copy constructor called" << std::endl;
    }

    WrongCat::~WrongCat() {
        std::cout << "WrongCat destructor called" << std::endl;
    }

    WrongCat &WrongCat::operator=(const WrongCat &other) {
        if (this == &other) {
            return *this;
        }
        std::cout << "WrongCat assignment operator called" << std::endl;
        return *this;
    }
    void WrongCat::makeSound() const {
        std::cout << "Wrong meow!" << std::endl;
    }
