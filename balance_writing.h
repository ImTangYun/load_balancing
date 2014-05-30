// yuntang
// file:balace_writing.h
#ifndef LOAD_BALANCING_BALANCE_WRITING_H_
#define LOAD_BALANCING_BALANCE_WRITING_H_

#include <vector>
#include <map>
using std::vector;
using std::map;
namespace load_balance
{
class LoadBalance
{
public:
	LoadBalance();
	~LoadBalance();
	void Write(vector<int> &server_resource_used, int request);
	void Init(const vector<int> &server_resource_used);
private:
	double rand_range(double front, double end);
	void WriteOnce(vector<int> &server_resource_used);
	void CalculateWeight(const vector<int> &server_resource_used);
	map<double, int> weight_;
};
}
#endif // LOAD_BALANCING_BALANCE_WRITING_H_
