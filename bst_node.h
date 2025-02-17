#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <fstream>
#include <string>

class bst_node 
{
public:
	bst_node * left;
	bst_node * right;
	string name;
	string address;
	int account_number;
	int password;
	int balance;

	bst_node();
	bst_node(string, string, int, int, int);
	
};