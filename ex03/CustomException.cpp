/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:53:03 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 19:59:07 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CustomException.hpp"

CustomException::~CustomException() throw ()
{}

CustomException::CustomException() : _msg("") {}
CustomException::CustomException(char const *msg) : _msg(msg) {}

const char * CustomException::what() const throw ()
{
    return _msg;
}