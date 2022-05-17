#include <iostream>
#include <string>
using namespace std;

#define CAD 10

struct Funcionario
{
 	int prontuario;
	string nome;
	double salario;
};

struct Lista
{
	Funcionario func;
	Lista* ant;	
}

Lista* init()
{
	return NULL;
}

Funcionario* insertFunc(int pront, string nome, double salario)
{
	Funcionario* novo = new Funcionario();
	novo->prontuario = pront;
	novo->nome = nome;
	novo->salario = salario;
	return novo;
}

Lista* insertList(Lista* lista, Funcionario* func)
{
	Lista* novo = new Lista();
	novo->func = func;
	novo->ant = lista;
	return novo;
}

void print(Lista* lista)
{
	Lista* aux;
	aux = lista;
	while (aux != NULL)
	{
        cout << "Prontuario: " << aux->func->prontuario << endl;
        cout << "Nome: " << aux->func->nome << endl;
        cout << "Salario: " << aux->func->salario << endl;
		aux = aux->ant;
	}
	cout << "----------" << endl;
}

Lista* find(Lista* lista, int pront)
{
	Lista* aux;
	aux = lista;
	while (aux != NULL && aux->func->prontuario != pront)
	{
		aux = aux->ant;
	}
	return aux;
}

Lista* remove(Lista* lista, int pront)
{
	Lista *aux;
	
	Lista *anterior = NULL;

	aux = lista;
	while (aux != NULL && aux->func->prontuario != pront)
	{
		anterior = aux;
		aux = aux->ant;
	}
	
	if (aux == NULL)
	{
		return lista;
	}
	
	if (anterior == NULL)
	{
		lista = aux->ant; 
	}
	else
	{
   	    anterior->ant = aux->ant;
	}
	free(aux);
	return lista;
}


int main(int argc, char** argv)
{
	Lista* minhaLista;
	int op;
	
	do{
		switch(op)
		{
		case 0:
			op = 0;
			break;
		case 1:
			inser = 0;
			break;
		default:
			break;
		}
	}while(op != 0);
	
    return 0;
}
