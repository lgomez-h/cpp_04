/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:11:55 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 17:44:19 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>


class MateriaSource : public IMateriaSource {
private:
    AMateria* _materias[4];
public:
    MateriaSource();
    MateriaSource(MateriaSource const & other);
    virtual ~MateriaSource();
    MateriaSource & operator=(MateriaSource const & other);
    
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};