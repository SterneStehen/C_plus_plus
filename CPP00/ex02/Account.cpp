/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:13:40 by smoreron          #+#    #+#             */
/*   Updated: 2024/08/14 15:03:33 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// Initialize static variables for the Account clas
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor for the Account class
Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _nbAccounts++; // Increase the number of accounts
    _totalAmount += initial_deposit; // Add the initial deposit to the total amount
    _displayTimestamp(); // Display the current timestamp
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

// Destructor for the Account class
Account::~Account(void) {
    _displayTimestamp(); // Display the current timestamp
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    _nbAccounts--; // Decrease the number of accounts
    _totalAmount -= _amount; // Subtract the account amount from the total amount
}

// Get the number of accounts
int Account::getNbAccounts(void) {
    return _nbAccounts;
}

// Get the total amount of money in all accounts
int Account::getTotalAmount(void) {
    return _totalAmount;
}

// Get the total number of deposits
int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

// Get the total number of withdrawals
int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

// Display information about all accounts
void Account::displayAccountsInfos(void) {
    _displayTimestamp(); // Display the current timestamp
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

// Make a deposit to the account
void Account::makeDeposit(int deposit) {
    _displayTimestamp(); // Display the current timestamp
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    _amount += deposit; // Add the deposit to the account amount
    _totalAmount += deposit; // Add the deposit to the total amount
    _nbDeposits++; // Increase the number of deposits for this account
    _totalNbDeposits++; // Increase the total number of deposits
    std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

// Make a withdrawal from the account
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp(); // Display the current timestamp
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    if (_amount < withdrawal) { // Check if there is enough money in the account
        std::cout << ";withdrawal:refused" << std::endl;
        return false; // If not enough money, refuse the withdrawal
    }
    _amount -= withdrawal; // Subtract the withdrawal amount from the account
    _totalAmount -= withdrawal; // Subtract the withdrawal amount from the total amount
    _nbWithdrawals++; // Increase the number of withdrawals for this account
    _totalNbWithdrawals++; // Increase the total number of withdrawals
    std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true; // Return true if the withdrawal was successful
}

// Check the current amount in the account
int Account::checkAmount(void) const {
    return _amount;
}

// Display the status of the account
void Account::displayStatus(void) const {
    _displayTimestamp(); // Display the current timestamp
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
              << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// Display the current timestamp
void Account::_displayTimestamp(void) {
    std::time_t now = std::time(0);
    std::tm *ltm = std::localtime(&now);
    std::cout << "[" << 1900 + ltm->tm_year
              << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon
              << std::setw(2) << std::setfill('0') << ltm->tm_mday << "_"
              << std::setw(2) << std::setfill('0') << ltm->tm_hour
              << std::setw(2) << std::setfill('0') << ltm->tm_min
              << std::setw(2) << std::setfill('0') << ltm->tm_sec << "] ";
}
