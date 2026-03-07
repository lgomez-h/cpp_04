/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 18:17:41 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 20:37:43 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Ground.hpp"
#include <iostream>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // Intentar aprender más de 4 materias
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice()); // No debería aprenderla

    ICharacter* me = new Character("me");
    AMateria* tmp;

    // Equipar materias
    tmp = src->createMateria("ice");
    if (!tmp)
    std::cout << "No se pudo crear materia" << std::endl;
    else
    me->equip(tmp);
    tmp = src->createMateria("cure");
    if (!tmp)
    std::cout << "No se pudo crear materia" << std::endl;
    else
    me->equip(tmp);

    // Intentar equipar materias no aprendidas
    tmp = src->createMateria("fire");
    if (!tmp)
        std::cout << "No se pudo crear materia 'fire'" << std::endl;
    me->equip(tmp); // No debería equipar nada

    // Equipar más de 4 materias
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice")); // Inventario lleno

    ICharacter* bob = new Character("bob");

    // Usar materias válidas
    me->use(0, *bob);
    me->use(1, *bob);

    // Usar materias en índices inválidos
    me->use(4, *bob);
    me->use(-1, *bob);

  // Unequip y gestión de punteros con Ground para todos los slots
for (int i = 0; i < 4; ++i) {
    AMateria* dropped = static_cast<Character*>(me)->getMateria(i);
    if (dropped)
        Ground::dropMateria(dropped);
    me->unequip(i);
}

delete bob;
delete me;
delete src;
Ground::clean(); // Limpiar el suelo
    return 0;
}
