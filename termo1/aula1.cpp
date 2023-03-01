<<<<<<< HEAD
#include <iostream>
#include <stdio>

using namespace std;

class TAluno{
    char Nome[50], Disciplina[20];
    float Nota1, Nota2;
    int RA, Faltas;

public:
    void setRA(int valor);
    void setNome(char *texto);
    void setDisciplina(char *texto);
    void setNota1(float valor);
    void setNota2(float valor);
    void setFaltas(int valor);

    int getRa();
    char *getnome();
    char *getDisciplina();
    float getNota1();
    float getNota2();
    int getFaltas();

    float calcularMedia();
    void VerificarStatus();
    void PassarDeAno();
}
=======
#include <stdio.h>

main()
{
	/*fun��o deve ser composta por:
		- Nome
		- Sem acento e sem espa�o
		- Abrir e fechar parenteses()
		- Seu conte�do � delimitado por abrir e fechar chaves {}
	*/	
	cout<< "Hello World";
}
>>>>>>> 5cb3ad55057fdaee2696676707ae91f5d2ce2033
