/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ground.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 18:37:08 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/21 20:27:35 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
class AMateria;

class Ground {
public:
    static void dropMateria(AMateria* m);
    static void clean();
};