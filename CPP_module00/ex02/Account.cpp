#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account()
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << 0;
	std::cout << ";created";
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << initial_deposit;
	std::cout << ";created";
	std::cout << "  [Account(initial_deposit)]" <<std::endl;
}

int		Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << "  [makeDeposit]" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	this->_amount -= withdrawal;
	if (!checkAmount())
	{
		std::cout << ";withdrawal:refused" << std::endl;
		this->_amount += withdrawal;
		return (false);
	}
	else
	{
		std::cout << ";withdrawal:" << withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	}
	std::cout << "  [makeWithdrawal]" << std::endl;
	return (true);
}

int		Account::checkAmount(void)const
{
	if (this->_amount < 0)
		return (0);
	return (1);
}

void	Account::_displayTimestamp( void )
{
	time_t		timestamp;
	char		buff[15];

	time(&timestamp);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&timestamp));
	std::cout << "[" << buff << "] ";
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawls:" << Account::getNbWithdrawals(); // << std::endl;
	std::cout << " [displayAccountInfos]" << std::endl;
}

void	Account::displayStatus(void)const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << "  [displayStatus]" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed";
	std::cout << "  [~Account destructor]" << std::endl;
}