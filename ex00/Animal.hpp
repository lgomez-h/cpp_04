/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:12:40 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/18 22:19:58 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &other);
    virtual ~Animal();
    Animal &operator=(const Animal &other);
    
    virtual void makeSound() const;
    std::string getType() const;
};
