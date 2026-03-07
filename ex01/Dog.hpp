/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:15:58 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 18:51:03 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
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
