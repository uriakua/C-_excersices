#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  int maxn, random, valor, oportunidades, i, continuar; //variable declaration, type int
  
  continuar=0;  //flag to stop playing
  maxn=10;  //max value for random numbers
  srand(time(0));   //use clock to pick a number
  random = (rand () % maxn)+1; //generate random number 
  oportunidades = 3; //number of chances
  cout << random; //display random number
  
  cout << "Bienvenido usuario" << endl; 
  
  while(continuar == 0){
  for(i=0; i<3; i++){   //for cycle to keep track of number of lives
    cout <<  "ingrese un número del 1 al 10: ";
    cin >> valor;
        if(valor != 1 && valor != 2 && valor != 3 && valor != 4 && valor != 5 && valor != 6 && valor != 7 && valor != 8 && valor != 9 && valor != 10){ //validate if the given number is between 1 to 10
            cout << "Valor invalido, terminando el juego";
            continuar=1;
            break;
            }   
    if(valor == random){    //check if the given number is equal to the random number
      cout << "Usted ha adivinado el número secreto"<< endl;
      cout << "Si desea volver a jugar presione 1, de lo contrario precione 0"<< endl;
      cin >> continuar;
        if(continuar != 0 && continuar != 1){   //if user gives a incorrect value, end game
                cout << "Opcion invalida, terminando el juego";
                break;
            }else if(continuar == 1){
                cout << endl;
                continuar = 0;
            }   else{
                    break;
                }
        }else if(valor > random){   //check if the given number is bigger than the random number
            oportunidades -= 1;
            cout << "el número que usted ingresó es mayor al número secreto, le quedan " << oportunidades << " vidas" << endl;
            if(oportunidades > 0){  //check if the remaining lives are more than 0
                    cout << "Intente otra vez, ";
                }else {
                    cout << "Usted agoto el numero de intentos" << endl;    //if there are no more lifes remaining, ask if user wants to continue playing
                    cout << "Si desea volver a jugar presione 1, de lo contrario precione 0"<< endl;
                    cin >> continuar;
                        if(continuar != 0 && continuar != 1){
                            cout << "Opcion invalida, terminando el juego";
                            break;
                            }else if(continuar == 1){
                                cout << endl;
                                continuar = 0;
                                oportunidades = 3;
                                }   else{
                                    cout << "Terminando el juego, hasta pronto.";
                                    continuar = 1;
                                    }
                }
            }
             else { //if given number is < than the random number
                oportunidades -= 1; 
                cout << "el número que usted ingresó es menor al número secreto, le quedan " << oportunidades << " vidas" << endl;
                if(oportunidades > 0){
                    cout << "Intente otra vez, ";
                }else {
                    cout << "Usted agoto el numero de intentos" << endl;
                    cout << "Si desea volver a jugar presione 1, de lo contrario precione 0"<< endl;
                    cin >> continuar;
                        if(continuar != 0 && continuar != 1){
                            cout << "Opcion invalida, terminando el juego";
                            break;
                            }else if(continuar == 1){
                                cout << endl;
                                continuar = 0;
                                oportunidades = 3;
                                }   else{
                                    cout << "Terminando el juego, hasta pronto.";
                                    continuar = 1;
                                    }
                }
        }  
  }
 } 
  return 0;
}
