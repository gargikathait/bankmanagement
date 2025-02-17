#pragma once
#include "bst_node.h"
#include "hashtable.h"
#include <stdio.h>
class BST_Tree
{
	vector <int> v;
	
public:
	BST_Tree();
	Hashtable h;
	bst_node *Root;
	void add_Account(string, string, int, int, int);
	bst_node* delete_Account(bst_node *, int);
	void withdraw(int,int);
	void deposit(int,int);
	void editaccount_byAdmin();
	void transfer(int,int,int);
	void transaction_history();
	void findMax(bst_node*);
	void load_Server();
	void update_server(bst_node *);
	bst_node* search(bst_node*,int);
	void printoinfo(bst_node*);
};