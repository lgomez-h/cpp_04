/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 12:48:38 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 17:30:47 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & other);
        virtual ~Ice();
        Ice & operator=(Ice const & other);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};