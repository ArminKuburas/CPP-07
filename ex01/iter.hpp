/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:09:25 by akuburas          #+#    #+#             */
/*   Updated: 2024/10/21 20:12:37 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>
void iter(T *array, size_t length, F function)
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

template <typename T>
void increment(T &value)
{
	value++;
}

template <typename T>
void decrement(T &value)
{
	value--;
}

template <typename T>
void print(T const& value)
{
	std::cout << value << " ";
}