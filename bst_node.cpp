
#include "bst_node.h"

bst_node::bst_node()
{
	left = nullptr;
	right = nullptr;
	name = " ";
    address = " ";
    account_number = 0;
    password = 0;
    balance = 0;
}
bst_node::bst_node(string name, string address, int account_number, int password, int balance)
{
	left = nullptr;
	right = nullptr;
	this->name = name;
	this->account_number = account_number;
	this->address = address;
	this->balance = balance;
	this->password = password;
}