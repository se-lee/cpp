#include "Account.hpp"

Account::Account(void)
{
//[19920104_091532] index:0;amount:42;created
	std::cout << &this->_displayTimestamp << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account(void)
{
	std::cout << &this->_displayTimestamp << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"  << "closed" << std::endl;
}


static int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

static int	Account::getTotalAmount(void)
{
	return(_totalAmount);
}

static int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

static int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

static void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << "total" << getTotalAmount();
	std::cout << "deposits:" << getNbDeposits();
	std::cout << "withdrawals:" << getNbWithdrawals();
}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	result;

	_amount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount + withdrawal << ";";
	if (checkAmount())
	{
		result = 1;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	else
	{
		result = 0;
		_amount += withdrawal;
		std::cout << "withdrawal:refused" << std::endl;
	}
	return (result);
}

int		Account::checkAmount( void ) const
{
	if (_amount < 0)
		return (0);
	return (1);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

static void	Account::_displayTimestamp( void )
{
	time_t		timestamp;
	char		buff[15];

	time(&timestamp);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&timestamp));
	std::cout << "[" << buff << "]";
}


