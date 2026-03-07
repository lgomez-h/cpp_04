/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:00:21 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 17:30:37 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & other);
        virtual ~Cure();
        Cure & operator=(Cure const & other);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
