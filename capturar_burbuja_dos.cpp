#include <iostream>
#include <iomanip>
using namespace std;

void altas();   //Prototype declaration
void mostrar();
void age();
void name();
void submenu();


string nombre[100], temp_b; //matricula[100]; //Global variables
int edad[100], total = 0, input, i, j, temp_a;

int main() {
    do{
        
    
        cout << "1 Dar de alta. 2 Mostrar. 3 Salir" << endl;
        cin >> input;
        switch(input){
            case 1:altas();
            break;
            case 2:submenu();
            break;
            case 3:cout << "Hasta luego" << endl;
            break;
            default : break;
        }
    }while(input!=3);
   
    cout << "Finalizando el programa";
    return 0;
}

void altas() {
    string name;
    int i = total;
    while (true) {
        cout << "Ingresa un nombre: ";
        cin >> name;
        if (name != "*") {
            nombre[i] = name;
            cout << "Edad: ";
            cin >> edad[i];
            /*cout << "Matricula: ";
            cin >> matricula[i];*/
            i++;
        } else {
            break;
        }
    }
    total = i;
}

void submenu(){
    do{
        
        cout << "1 Ordenar por edad. 2 Ordenar por nombre. 3 Salir" << endl;
        cin >> input;
        switch(input){
            case 1:age();
            break;
            case 2:name();
            break;
            case 3:main();
            break;
            default : main();
        }
    }while(input!=3);    
}

void age(){
    //for(i=0;i<total;++i)
        //cin>>a[i];
        
    for(i=1;i<total;++i)
    {
        for(j=0;j<(total-i);++j)
            if(edad[j]>edad[j+1])
            {
                temp_a=edad[j];
                temp_b=nombre[j];
                edad[j]=edad[j+1];
                nombre[j]=nombre[j+1];
                edad[j+1]=temp_a;
                nombre[j+1]=temp_b;
            }
    }
    mostrar();
    /*cout<<"Array after bubble sort:";
    for(i=0;i<n;++i)
        cout<<" "<<a[i];*/
}

void name(){
    cout << "No disponible poe el momento";
}

void mostrar() {
    int i;
    cout << setw(10) << "Nombre" << setw(10) << "Edad" << endl; 
    for (i = 0; i < total; i++) {
        cout << setw(10) << nombre[i] << setw(10) << edad[i] << endl;
    }
}


