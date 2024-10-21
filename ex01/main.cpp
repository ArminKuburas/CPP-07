/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:10:49 by akuburas          #+#    #+#             */
/*   Updated: 2024/10/21 20:16:53 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int integers[] = {1, 2, 3, 4, 5};
	float floats[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	std::string strings[] = {"one", "two", "three", "four", "five"};
	
	std::cout << "Original integers: ";
	iter(integers, 5, print<int>);
	std::cout << std::endl;
	std::cout << "Incremented integers: ";
	iter(integers, 5, increment<int>);
	iter(integers, 5, print<int>);
	std::cout << std::endl;
	std::cout << "Original floats: ";
	iter(floats, 5, print<float>);
	std::cout << std::endl;
	std::cout << "Decremented floats: ";
	iter(floats, 5, decrement<float>);
	iter(floats, 5, print<float>);
	std::cout << std::endl;
	std::cout << "Original strings: ";
	iter(strings, 5, print<std::string>);
	std::cout << std::endl;
	std::cout << "Incremented strings: ";
	iter(strings, 5, increment<std::string>);
	iter(strings, 5, print<std::string>);
}