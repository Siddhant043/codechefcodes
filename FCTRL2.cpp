#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp=boost::multiprecision;
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    long int num; mp::cpp_int fac=1;
	    cin>>num;
	    for(int i=2; i<=num; i++){
	        fac = fac*i;
	    }
	    cout<<fac<<endl;
	}
	return 0;
}
