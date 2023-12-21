/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:47:53 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/21 15:41:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip> // Para manipulação de formato

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
  _accountIndex = _nbAccounts;
  _amount = initial_deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _nbAccounts++;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
  // _nbAccounts = 0;
  // _accountIndex = _nbAccounts;
  // _nbAccounts++;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
  std::cout << "accounts:" << _nbAccounts;
  return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    std::cout << ";total:" << _totalAmount;
  return(_totalAmount);
}

int Account::getNbDeposits(void)
{
  std::cout << ";deposits:" << _totalNbDeposits;
  return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
  std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
  return(_totalNbWithdrawals);
}
void Account::_displayTimestamp(void)
{
     // Obtendo o tempo atual
    std::time_t tempo_atual = std::time(NULL);
    std::tm *tempo_struct = std::localtime(&tempo_atual);

    // Definindo um buffer para armazenar o tempo formatado
    const int tam_buffer = 50; // Tamanho do buffer
    char buffer[tam_buffer];

    // Formatando o tempo usando strftime
    std::strftime(buffer, tam_buffer, "%Y%m%d_%H%M%S", tempo_struct);
    std::string tempo_str(buffer);
    std::cout << "[" << tempo_str << "] ";
    return ;
}

void  Account::displayAccountsInfos(void)
{
  _displayTimestamp();
  getNbAccounts();
  getTotalAmount();
  getNbDeposits();
  getNbWithdrawals();
}

void Account::makeDeposit(int deposit)
{
  // _nbAccounts = 0;
  // _accountIndex = _nbAccounts;
  // _nbAccounts++;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
  _amount += deposit;
  _nbDeposits = 1;
  _totalAmount += deposit;
  _totalNbDeposits += 1;
  std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
  // _nbAccounts = 0;
  // _accountIndex = _nbAccounts;
  // _nbAccounts++;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
  if (withdrawal > _amount)
  {
    std::cout << ";withdrawal:refused" << std::endl;
  }
  else
  {
    _amount -= withdrawal;
    _nbWithdrawals= 1;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals += 1;
    std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbDeposits << std::endl;
  }
  return (0);
}

int Account::checkAmount(void) const
{
  _nbAccounts = 0;
  _nbAccounts++;
  return(_amount);
}

void  Account::displayStatus(void) const
{
  // _nbAccounts = 0;
  // _accountIndex = _nbAccounts;
  // _nbAccounts++;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}