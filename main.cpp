#include <unistd.h>
#include <stdio.h>
#include <vector>
#include "balance_writing.h"
#define SERVER_NUM 10;
using load_balance::LoadBalance;
using std::vector;
int main()
{
	LoadBalance l;
	vector<int> server_resource_used;
	for (int i = 0; i < 10; ++i) {
		// server_resource_used.push_back(0);
	}
	l.Init(server_resource_used);
	return 0;
}
