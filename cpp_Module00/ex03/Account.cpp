/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-idri <ael-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:06:44 by ael-idri          #+#    #+#             */
/*   Updated: 2022/08/09 17:26:09 by ael-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <iomanip>

using	std::cout;
using	std::endl;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return	(_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

Account::Account( int initial_deposit )
{
	static int	index;

	_accountIndex = index; 
	_amount = initial_deposit;

	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	cout	<< "index:" << _accountIndex << ";amount:"
			<< _amount << ";created" << endl;

	index++;
}

Account::~Account()
{
	_displayTimestamp();
	cout	<< "index:" << _accountIndex << ";amount:"
			<< _amount << ";closed" << endl;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = _amount;
	
	_amount += deposit;

	_totalNbDeposits++;
	_nbDeposits++;

	_totalAmount += deposit;

	_displayTimestamp();
	cout 	<< "index:" << _accountIndex << ";p_amount:"
			<< p_amount << ";deposit:" << deposit << ";amount:" 
			<< _amount << ";nb_deposits:" << _nbDeposits << endl; 
}

int		Account::checkAmount( void ) const
{
	if (_amount < 0)
		return (0);
	return (1);
}
bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = _amount;
	
	_amount -= withdrawal;
	if (!checkAmount())
	{
		_amount += withdrawal;
		_displayTimestamp();
		cout	<< "index:" << _accountIndex << ";p_amount:"
				<< p_amount << ";withdrawal:refused" << endl;
	
		return (false);
	}
	
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	
	_totalAmount -= withdrawal;
	
	_displayTimestamp();
	cout	<< "index:" << _accountIndex << ";p_amount:" 
			<< p_amount << ";withdrawal:" << withdrawal
			<< ";amount:" << _amount << ";nb_withdrawals:"
			<< _nbWithdrawals << endl;
	
	return (true);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	cout	<< "index:" << _accountIndex << ";amount:"
			<< _amount << ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals << endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	cout	<< "accounts:" << getNbAccounts() << ";total:"
			<< getTotalAmount() << ";deposits:" << getNbDeposits()
			<< ";withdrawals:" << getNbWithdrawals() << endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	current;

	current = time(NULL);
	cout << std::put_time(localtime(&current), "[%Y%m%d_%H%M%S] ");
}