/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:10:17 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/18 22:16:05 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &other);
    
    void makeSound() const;
    std::string getType() const;
};
