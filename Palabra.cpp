#include "iostream"
#include "string"
using namespace std;
int main(void){
    string palabra;
    cout << "Ingrese la palbra: " <<endl; cin>> palabra;

    if ((palabra.size()%2)==0){
        cout <<"La palabra es par"<<endl;
    }
    else{
        cout <<"La palbra es impar"<< endl;
    }
    return 0;
}