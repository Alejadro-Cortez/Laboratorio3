#include "iostream"
#include "string"

using namespace std;
int main(void){
    string palabra;
    cout << "ingrese una palabra: "<<endl; cin>> palabra;
    
    if (palabra.front() == palabra.back()){
        cout << "La letra del principio y del final son las mismas "<<endl;
    }
    else{
        cout << "La letras del principio y del final no son las mismas"<<endl;
    }
    return 0;
}