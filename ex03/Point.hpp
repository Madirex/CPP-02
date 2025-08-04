/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:38:16 by anmateo-          #+#    #+#             */
/*   Updated: 2025/08/04 17:38:17 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;

	public:
		Point(void);
		Point(const float x_val, const float y_val);
		Point(const Point &other);
		Point& operator=(const Point &other);
		~Point(void);

		Fixed getX(void) const;
		Fixed getY(void) const;
};

#endif
