// yuntang
// file:balace_writing.cpp
#include <vector>
#include "balance_writing.h"
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
void LoadBalance::CalculateWeight(const vector<int> &server_resource_used)
{

}
}
