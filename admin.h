#include "BST_Tree.h"
#include "hashtable.h"
void admin()
{
	BST_Tree t;
	Hashtable h;
	int condition = 0;
	while (condition != 6)
	{
		cout << "welcome ADMIN" << endl;
		cout << "choose the following please" << endl;
		cout << "press 1 to add account " << endl;
		cout << "press 2 to delete account " << endl;
		cout << "press 3 to check all account " << endl;
		cout << "press 4 to see password of account " << endl;
		cout << "press 5 to edit account " << endl;
		cout << "press 6 to exit" << endl;
		cin >> condition;
		if (condition == 1)
		{
			string n = "", a = "";
			int acc, p, b;
			cout << "Enter Name" << endl;
			cin >> n;
			cout << "Enter Address" << endl;
			cin >> a;
			cout << "Enter Account Number" << endl;
			cin >> acc;
			cout << "Enter Password" << endl;
			cin >> p;
			cout << "Enter Balance" << endl;
			cin >> b;
			t.add_Account(n, a, acc, p, b);
		}
		if (condition == 2)
		{
			int acc = 0;
			cout << "Enter Account Number" << endl;
			cin >> acc;
			t.load_Server();
			t.Root=t.delete_Account(t.Root, acc);
			cout << "Account Deleted" << endl;
			h.delete_password(acc);
			cout << "Password Deleted" << endl;
			t.update_server(t.Root);
			cout << "Updated" << endl;
		}
		if (condition == 3)
		{
			t.load_Server();
			t.printoinfo(t.Root);
		}
		if (condition == 4)
		{
			h.displayPasswords();
		}
		if (condition == 5)
		{

		}
		if (condition == 6)
		{
			condition = 6;
		}
	}
}