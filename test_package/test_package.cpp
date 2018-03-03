#include <iostream>
#include <boost/lambda/lambda.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/function.hpp>

class A
{
public:
	A(int a) :_a(a) {}
	int get(int dummy) const
	{
		return _a + dummy;
	}
	void set(int a)
	{
		_a = a;
	}
private:
	int _a;
};

int func(boost::function<int (int)> f, int i)
{
	return f(1);
}

int main()
{
	A a(3);
	boost::function<int (int)> fGet = boost::lambda::bind(&A::get, a, boost::lambda::_1);
	std::cout << (boost::lambda::_1 ->* &A::get)(&a)(1) << std::endl;
	// Output: 4

	return 0;
}