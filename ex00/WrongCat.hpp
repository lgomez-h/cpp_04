/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:10:02 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/18 22:16:48 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class  WrongCat : public WrongAnimal {
public:
    WrongCat();

    WrongCat(const WrongCat &other);

    ~WrongCat();
    

    WrongCat &operator=(const WrongCat &other);

    void makeSound() const;
};
