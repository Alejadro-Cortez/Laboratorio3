#include "iostream"
#include "math.h"
using namespace std;
int main()
{   
    int a,b ;
    cout<<"Digite el numero mayor: "<< endl; cin>> a;
    cout<<"Digite el numero menor: "<<endl; cin>>b;

    if(a%b==0){
    cout<< "Es diviseble entre ese numero"<<endl;
    }
    else if(a%b<=0){ 
    cout << "No es divisible ese numero"<<endl;
    }
 return 0;
}