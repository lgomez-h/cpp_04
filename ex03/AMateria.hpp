/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:42:59 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 17:30:20 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ICharacter.hpp"



class AMateria
{
protected:
std::string _type;
public:
AMateria(std::string const & type);
AMateria(AMateria const & other);
virtual ~AMateria();
AMateria & operator=(AMateria const & other);

std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};
