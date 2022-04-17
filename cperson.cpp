#include<iostream>
#include<unistd.h>
#include<unistd.h>

using namespace std;

class Cperson
{
	private:
		Cperson(){}
		~Cperson(){}
	private:
		static Cperson * ps;
		static pthreas_mutex_t lock;
	public:
		static CPerson * Getobject();
		static void Destroy(Cperson * p);

}
