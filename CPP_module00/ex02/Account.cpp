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


// static int	Account::getNbAccounts(void)
// {

// }

// static int	Account::getTotalAmount(void)
// {

// }

// static int	Account::getNbDeposits(void)
// {

// }

// static int	Account::getNbWithdrawals(void)
// {

// }

// static void	Account::displayAccountsInfos(void)
// {

// }



// void	Account::makeDeposit(int deposit)
// {

// }

// bool	Account::makeWithdrawal(int withdrawal)
// {

// }

// int		Account::checkAmount( void ) const
// {

// }

// void	Account::displayStatus( void ) const
// {
// //[19920104_091532] index:0;amount:42;created   これの表示


// }

// static void	Account::_displayTimestamp( void )
// {
// 	std::cout << "[19920104_091532] ";
// 	return ;
// }

