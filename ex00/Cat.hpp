/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 17:21:18 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/18 22:12:50 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();

    Cat(const Cat &other);

    ~Cat();

    Cat &operator=(const Cat &other);

    void makeSound() const;
};
