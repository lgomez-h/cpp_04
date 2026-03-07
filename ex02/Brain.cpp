/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:35:00 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 18:43:18 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    for (int i = 0; i < 100; ++i) {
        ideas[i] = "Empty idea";
    }
    std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain &other) {
    for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}
Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}
Brain &Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
        std::cout << "Brain assignment operator called" << std::endl;
    }
    return *this;
}
void Brain::setIdea(int index, const std::string &idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    } else {
        std::cerr << "Index out of bounds" << std::endl;
    }
}
std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return ideas[index];
    } else {
        std::cerr << "Index out of bounds" << std::endl;
        return "";
    }
}
