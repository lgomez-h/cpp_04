/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:15:58 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/18 22:11:38 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(const Dog &other);
    ~Dog();
    Dog &operator=(const Dog &other);
    void makeSound() const;
};
