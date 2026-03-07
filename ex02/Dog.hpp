/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:15:58 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/20 17:16:36 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal {
private:
    Brain *objbrain;
public:
    Dog();
    Dog(const Dog &other);
    ~Dog();
    Dog &operator=(const Dog &other);
    void makeSound() const;
    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const; 
};
