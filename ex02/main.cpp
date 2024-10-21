/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:34:17 by akuburas          #+#    #+#             */
/*   Updated: 2024/10/21 20:38:08 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	try
	{
		Array<int> emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << std::endl;

		Array<int> intArray(5);
		std::cout << "Int array size: " << intArray.size() << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			intArray[i] = i;
		intArray[0] = 42;
		intArray[1] = 21;
		std::cout << "Int array[0]: " << intArray[0] << std::endl;
		std::cout << "Int array[1]: " << intArray[1] << std::endl;
		std::cout << "Int array[2]: " << intArray[2] << std::endl;
		std::cout << "Int array[3]: " << intArray[3] << std::endl;
		std::cout << "Int array[4]: " << intArray[4] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}