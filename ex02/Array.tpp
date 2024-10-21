/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:28:13 by akuburas          #+#    #+#             */
/*   Updated: 2024/10/21 20:37:41 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _array(nullptr), _size(0) {
	std::cout << "Array default constructor" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {
	std::cout << "Array constructor" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &other) : _array(nullptr), _size(0)
{
	std::cout << "Array copy constructor" << std::endl;
	*this = other;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array destructor" << std::endl;
	delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	std::cout << "Array assignment operator" << std::endl;
	if (this == &other)
		return *this;
	delete[] _array;
	_size = other._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _array[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}