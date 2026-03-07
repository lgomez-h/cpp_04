/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:06:17 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 17:35:17 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <string>


class IMateriaSource
{
public:
virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
};