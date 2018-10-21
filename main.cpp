#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  int maxn, random, valor, oportunidades, i, continuar; //variable declaration, type int
  bool end;
  
  continuar=1;  //flag to stop playing
  maxn=10;  //max value for random numbers
  
  cout << "Bienvenido usuario" << endl; 
  
    while(continuar == 1){
        srand(time(0));   //use clock to pick a number
        random = (rand () % maxn)+1; //generate random number
        oportunidades = 3; //number of chances
        cout << "el numero secreto es: " << random << endl; //display random number
        for(i=0; i<3; i++){
            cout <<  "ingrese un número del 1 al 10: ";
            cin >> valor;
                //if(valor == 0){
                  //  continuar = 0;
                    //i = 3;
                //}else{
                    if(valor < 1 || valor > 10){
                        cout << "Valor invalido intenta otra vez" << endl;
                        oportunidades -= 1;
                        cout << "Le quedan " << oportunidades << " intentos" << endl;
                    }else if(valor == random){
                        cout << "Has adivinado el numero secreto"<< endl;
                        i = 3;
                    }else if(valor > random){
                        cout << "El numero que has introducido es mayor al numero secreto" << endl;
                        oportunidades -= 1;
                        cout << "Le quedan " << oportunidades << " intentos" << endl;
                    }else if(valor < random){
                        cout << "El numero que has introducido es menor al numero secreto" << endl;
                        oportunidades -= 1;
                        cout << "Le quedan " << oportunidades << " intentos" << endl;
                    }
                        if(oportunidades == 0){
                        i = 3;
                        cout << "Usted ha excedido el numero de oportunidades" << endl;
                        }
            //} 
        } 
                    
    cout << "Precione 1 para seguir jugando, 0 para terminar " << endl;
    cin >> continuar;
        if(valor == 0){
            continuar = 0;
            cout << endl;
            cout << "Fin del juego";
          }
 }     
return 0;
}  
  
  
  
  

