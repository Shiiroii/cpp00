/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:13:23 by lionelulm         #+#    #+#             */
/*   Updated: 2025/12/05 16:46:52 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iostream>
# include <ctime>
# include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_displayTimestamp();

	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();

	std::cout
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
	_nbAccounts--;
}

void Account::_displayTimestamp()
{
	std::time_t time = std::time(0);
	std::tm now = *std::localtime(&time);

	std::cout
		<< "[" << (now.tm_year + 1900)
		<< std::setfill('0')
		<< std::setw(2) << now.tm_mon + 1
		<< std::setw(2) << now.tm_mday << "_"
		<< std::setw(2) << now.tm_hour
		<< std::setw(2) << now.tm_min
		<< std::setw(2) << now.tm_sec << "] ";
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();

	std::cout
		<< "accounts" << _nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();

	std::cout
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}


void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();

	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout
		<< "index:" << _accountIndex
		<< ";p_amount:" << _amount - deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();

	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout
			<< withdrawal << ";amount:"
			<< _amount << ";nb_withdrawals:"
			<< _nbWithdrawals << std::endl;
	}
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}
