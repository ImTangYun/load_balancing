// yuntang
// file:balace_writing.h
#ifndef LOAD_BALANCING_BALANCE_WRITING_H_
#define LOAD_BALANCING_BALANCE_WRITING_H_

#include <vector>
using std::vector;
namespace load_balance
{
class LoadBalance
{
public:
	LoadBalance(vector<int> &server);
	~LoadBalance();
	void Write(vector<int> &server, int request);
private:
	void CalculateWeight();
	vector<double> weight_;
};
}
#endif // LOAD_BALANCING_BALANCE_WRITING_H_
