add_library(sample_bank_library "bank_account.cpp" "bank_account.h"
                                "atm.cpp" "atm.h" 
								"customer.cpp" "customer.h"
								"Transaction.cpp" "Transaction.h"
								"savings_account.cpp" "savings_account.h"
								"checking_account.cpp" "checking_account.h")
add_executable(sample_bank_exe "main.cpp" "bank_account.cpp" "atm.cpp"
                                      "customer.cpp" "Transaction.cpp" 
									  "savings_account.cpp" "checking_account.cpp")