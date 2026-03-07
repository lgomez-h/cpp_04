/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:12:40 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/20 17:22:06 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AAnimal{
protected:
    std::string type;
public:
    AAnimal ();
    AAnimal (const AAnimal &other);
    virtual ~AAnimal ();
    AAnimal &operator=(const AAnimal &other);
    
    virtual void makeSound() const = 0;
    std::string getType() const;
};
