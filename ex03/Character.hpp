/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:45:49 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 18:25:22 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>


class Character : public ICharacter{
    private:
        AMateria* _inventory[4];
        std::string _name;
    public:
        Character(std::string const & name);
        Character(Character const & other);
        virtual ~Character();
        Character & operator=(Character const & other);
        
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        
        AMateria* getMateria(int idx) const;
};
