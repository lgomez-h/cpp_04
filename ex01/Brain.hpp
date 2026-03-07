/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:35:15 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/19 17:39:09 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include <string>

class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &other);
    ~Brain();
    Brain &operator=(const Brain &other);

    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};
