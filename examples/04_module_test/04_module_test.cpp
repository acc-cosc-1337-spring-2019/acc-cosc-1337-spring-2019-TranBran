#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test Bank Account Initialization")
{

	BankAccount account(1, 100);

	//Uses the variable account and uses the function get balance to pull the data 
	REQUIRE(account.get_balance() == 100);


}

TEST_CASE("Test Bank Account Deposit")
{

	BankAccount account(1, 100);
	account.deposit(25);
	
	REQUIRE(account.get_balance() == 125);

	account.deposit(-10);
	REQUIRE(account.get_balance() == 125);


}

TEST_CASE("Test Bank Account Withdraw")
{

	BankAccount account(1, 100);

	account.withdraw(25);
	REQUIRE(account.get_balance() == 75);

	account.withdraw(-25);
	REQUIRE(account.get_balance() == 75);

	account.withdraw(200);
	REQUIRE(account.get_balance() == 75);

}