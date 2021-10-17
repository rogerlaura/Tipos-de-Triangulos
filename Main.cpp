#include <iostream>
using namespace std;
int x,y,z;
int main(int argc, char *argv[]) {
	cin>>x>>y>>z;
	if(x==y&&y==z&&x==z){
		cout<<"equilatero";
	}else if(x!=y&&y!=z&&x!=z){
		cout<<"escaleno";
	}else{
		cout<<"isosceles";
	}
	
	return 0;
}

