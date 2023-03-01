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