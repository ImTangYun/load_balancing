// yuntang
// file:main.cpp
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "balance_writing.h"
#define SERVER_NUM 10
#define MAX_REQ_ONCE 15
using load_balance::LoadBalance;
using std::vector;
int main()
{
	LoadBalance l;
	vector<int> server_resource_used;
	for (int i = 0; i < SERVER_NUM; ++i) {
		server_resource_used.push_back(0);
	}
	server_resource_used[5] = 100;
	l.Init(server_resource_used);
	srand(time(0));
	for (int j = 0; j < 1000; ++j) {
		int req = rand() % MAX_REQ_ONCE;
		l.Write(server_resource_used, req);
	}
	printf("after a time of running:\n");
	for (int i = 0; i < SERVER_NUM; ++i) {
		printf("%dth server resource used: %d\n", i, server_resource_used[i]);
	}
	return 0;
}
