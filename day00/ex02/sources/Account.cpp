/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:06:03 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/31 17:19:41 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <sys/time.h>
#include <iostream>
#include <string>
#include <locale>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" <<  _amount << ";";
	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" <<  _amount << ";";
	_nbWithdrawals ++;
	_totalNbWithdrawals ++;
	std::cout << "nb_withdrawals:" <<  _nbWithdrawals << std::endl;
	return (true);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" <<  _amount << ";";
	std::cout << "deposit:" <<  deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" <<  _amount << ";";
	_nbDeposits ++;
	_totalNbDeposits ++;
	std::cout << "nb_deposits:" <<  _nbDeposits << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" <<  _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_nbAccounts << ";";
	_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts ++;
	std::cout << "amount:" << initial_deposit << ";";
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "created" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t;
    std::tm* now;
	
	t = std::time(0);
	now = std::localtime(&t);
    std::cout << "["
		<< (now->tm_year + 1900) << (now->tm_mon + 1) <<  now->tm_mday
		<< "_"
		<< now->tm_hour << now->tm_min << now->tm_sec
        << "] ";
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}
