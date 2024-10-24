#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct personas{
    int id_del_registro, cedula, edad;
    string nombre;
    float peso, altura;
    char genero[1];

}p;

int main(){
int npersonas;

fstream filebi("./archivo.bin", ios::out | ios::binary);

cout << "ingrese el numero de personas que desea registrar" << endl;
cin >> npersonas;

for(int i=0; i<npersonas; i++){
    cout << "Ingrese el id de registro" << i+1 << endl;
    cin >> p.id_del_registro;
    
    cout << "Ingrese el nombre de la persona"<< i+1 << endl;
    cin >> p.nombre;

    cout << "Ingrese la cedula de la persona" << i+1 <<endl;
    cin >> p.cedula;

    cout << "Ingrese la edad de la persona" << i+1 << endl;
    cin >> p.edad;

    cout << "Ingrese el peso de la persona" << i+1 << endl;
    cin >> p.peso;

    cout << "Ingrese la altura de la persona" << i+1 << endl;
    cin >> p.altura;

    cout << "Ingrese el genero de la persona" << i+1 << endl;
    cin >> p.genero;

    filebi.write(reinterpret_cast<char *>(&p),sizeof(personas));
}



filebi.close();
return 0;


}