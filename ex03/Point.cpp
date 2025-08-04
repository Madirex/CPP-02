/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:38:10 by anmateo-          #+#    #+#             */
/*   Updated: 2025/08/04 17:38:11 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float x_val, const float y_val) : x(x_val), y(y_val) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point& Point::operator=(const Point &other)
{
	(void)other;
	return *this;
}

Point::~Point(void) {}

Fixed Point::getX(void) const
{
	return this->x;
}

Fixed Point::getY(void) const
{
	return this->y;
}
