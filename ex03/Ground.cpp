/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ground.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 20:14:51 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 20:28:44 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Ground.hpp"
#include "AMateria.hpp"

#define MAX_GROUND 100
static AMateria* ground[MAX_GROUND];
static int groundCount = 0;

void Ground::dropMateria(AMateria* m) {
    if (m && groundCount < MAX_GROUND)
        ground[groundCount++] = m;
}

void Ground::clean() {
    for (int i = 0; i < groundCount; ++i)
        delete ground[i];
    groundCount = 0;
}
