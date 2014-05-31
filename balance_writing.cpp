// yuntang
// file:balace_writing.cpp
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "balance_writing.h"
#define TOTAL_RESOURCE 10000
using std::vector;
namespace load_balance
{
LoadBalance::LoadBalance()
{

}
LoadBalance::~LoadBalance()
{
	srand(time(0));
}
void LoadBalance::Init(const vector<int> &server_resource_used)
{
	CalculateWeight(server_resource_used);
}
void LoadBalance::Write(vector<int> &server_resource_used, int request)
{
	printf("rand_num: %f\n", rand_range(1,10));
}
void LoadBalance::WriteOnce(vector<int> &server_resource_used)
{
	printf("rand_num: %f\n", rand_range(1,10));
}
double LoadBalance::rand_range(double front, double end)
{
	double tmp = rand();
	if (tmp > 1) {
		tmp = tmp - 1;
	}
	return tmp/(RAND_MAX)*(end-front)+front;
}
void LoadBalance::CalculateWeight(const vector<int> &server_resource_used)
{
	int i = 0;
	for (auto iter = server_resource_used.begin(); iter != server_resource_used.end(); ++iter) {
		weight_[static_cast<double>(TOTAL_RESOURCE - *iter)] = i;
		++i;
	}
}
}
