#include "hashtable.h"
#include "BST_Tree.h"
#include "admin.h"
#include "staff.h"
#include "costumer.h"
#include "string.h"
#include "Node_1.h"
#include "Node.h"

void boot()
{
	Hashtable H;
	BST_Tree T;
	H.starthash();
	T.load_Server();
}
int main()
{
	void boot();

	int condition=0;
	while (condition != 4)
	{
		cout << "YOU want to login as:\t\t\t\t\t\t" << endl << endl;
		cout << "1-ADMIN" << endl;
		cout << "2-STAFF" << endl;
		cout << "3-CUSTOMER" << endl;
		cin >> condition;
		if (condition == 1)
		{
			admin();
		}
		if (condition == 2)
		{

		}
		if (condition == 3)
		{
			customer();
		}
		if (condition == 4)
		{
			condition = 4;
		}
	}

	
	system("pause");
	return 0;
}