#include <iostream>
#include <iomanip>
using namespace std;

void altas ();			//Prototype declaration
void mostrar ();
//void int buscar(); o.o?



string nombre[100];		//Global variables
int total = 0, input, i, j;


int
main ()
{
  do
    {
      cout << "1 Dar de alta. 2 Mostrar. 3 Salir" << endl;
      cin >> input;
      switch (input)
	{
	case 1:
	  altas ();
	  break;
	case 2:
	  mostrar ();
	  break;
	default:
	  break;
	}
    }
  while (input != 3);

  cout << "Finalizando el programa";
  return 0;
}

void
altas ()
{
  string name;
  bool encontrado;
  int i = total;
  while (true)
    {
      cout << "Ingresa un nombre: ";
      cin >> name;
      if (name != "*")
	{
	  encontrado = buscar (name);	//error buscar was not declared in this scope
	  if (encontrado == 0)
	    {
	      nombre[i] = name;
	      i++;
	    }
	  else
	    {
	      cout << "El nombre que usted introdujo ya esta ocupado.";
	    }

	}
      else
	{
	  break;
	}
    }
  total = i;
}


int
buscar (string name)
{
  int i = 0;
  while (i < total && name != nombre[i])
    {
      i++;
      if (i == total)
	return 0;
      else
	return 1;
    }
}

void
mostrar ()
{
  int i;
  cout << setw (10) << "Nombre" << setw (10) << endl;
  for (i = 0; i < total; i++)
    {
      cout << setw (10) << nombre[i] << endl;
    }
}

