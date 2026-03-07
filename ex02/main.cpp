/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 18:54:30 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/20 17:27:25 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const int N = 100;
    AAnimal* AAnimals[N];
    //AAnimal* animal = new AAnimal(); // No se puede instanciar AAnimal porque es una clase abstracta
    // Crear mitad Dog y mitad Cat
    for (int i = 0; i < N / 2; ++i)
        AAnimals[i] = new Dog();
    for (int i = N / 2; i < N; ++i)
        AAnimals[i] = new Cat();

    // Polimorfismo: makeSound
    std::cout << "\n--- Probando makeSound() ---" << std::endl;
    for (int i = 0; i < N; ++i)
        AAnimals[i]->makeSound();

    // Prueba de copia profunda en Dog
    std::cout << "\n--- Probando copia profunda en Dog ---" << std::endl;
    Dog dog1;
    dog1.setIdea(0, "Correr tras la pelota");
    Dog dog2 = dog1;
    dog1.setIdea(0, "Dormir");
    std::cout << "dog1 idea: " << dog1.getIdea(0) << std::endl;
    std::cout << "dog2 idea: " << dog2.getIdea(0) << std::endl;

    // Prueba de copia profunda en Cat
    std::cout << "\n--- Probando copia profunda en Cat ---" << std::endl;
    Cat cat1;
    cat1.setIdea(0, "Cazar ratones");
    Cat cat2;
    cat2 = cat1; // Operador de asignación
    cat1.setIdea(0, "Dormir en el sofá");
    std::cout << "cat1 idea: " << cat1.getIdea(0) << std::endl;
    std::cout << "cat2 idea: " << cat2.getIdea(0) << std::endl;

    // Liberar memoria
    std::cout << "\n--- Liberando memoria ---" << std::endl;
    for (int i = 0; i < N; ++i)
        delete AAnimals[i];

    return 0;
}