// yuntang
// file:balace_writing.cpp
#include <time.h>
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

}
void LoadBalance::Init(const vector<int> &server_resource_used)
{
	CalculateWeight(server_resource_used);
}
void LoadBalance::Write(vector<int> &server_resource_used, int request)
{

}
void LoadBalance::WriteOnce(vector<int> &server_resource_used)
{
	
}
double LoadBalance::rand_range(double front, double end)
{
	rand(time(0));
	double raw_num = rand();

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
