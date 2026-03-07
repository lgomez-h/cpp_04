/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 17:21:18 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 18:52:53 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain *objbrain;
public:
    Cat();

    Cat(const Cat &other);

    ~Cat();

    Cat &operator=(const Cat &other);

    void makeSound() const;
    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};
