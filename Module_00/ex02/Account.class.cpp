#include "Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

static int next_index = 0;
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void ) {
    Account::_nbAccounts++;
    _accountIndex = next_index++;
    _amount = 0;
    _nbDeposits = 1;
    _nbWithdrawals = 0;
}

Account::Account(int initial_deposit) {
    Account::_nbAccounts++;
    _accountIndex = next_index++;
    Account::_totalAmount += initial_deposit;
    _amount = initial_deposit;
    _nbDeposits = 1;
    _nbWithdrawals = 0;

    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account( void ) {
    Account::_nbAccounts--;
    Account::_totalAmount -= _amount;

    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    Account::_totalNbDeposits++;
    _amount += deposit;
    Account::_totalAmount += deposit;

    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << (_amount - deposit) << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal ) {
    if (_amount < withdrawal)
    {
        Account::_displayTimestamp();
        std::cout << " ";
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawal:refused" << std::endl;

        return false;
    }

    Account::_totalNbWithdrawals++;
    _amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    _nbWithdrawals++;

    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << (_amount + withdrawal) << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;

    return true;
}

int		Account::checkAmount( void ) const {
    return _amount;
}

void	Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

    //tm : Structure containing a calendar date and time broken down into its components.
	tm utc_tm = *localtime(&time_now);
	std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
			<< std::setw(2) << utc_tm.tm_mon //setwidth
			<< std::setw(2) << utc_tm.tm_mday << "_"
			<< std::setw(2) << utc_tm.tm_hour
			<< std::setw(2) << utc_tm.tm_min
			<< std::setw(2) << utc_tm.tm_sec << "] ";
}
