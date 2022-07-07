/*1. Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome,endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias detodos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final.*/

#include <string>
#include <iostream>

using namespace std;

struct alunos{
  int matricula;
  string nome;
  string endereco;
  float mediageral;
};

int main() {

const int quant = 2;

int i;  
  
alunos aluno[quant];

cout<<"\nCADASTRO DE ALUNOS: ";
for(i=0; i<quant; i++){
  cout<<"\n\nDigite a matricula do aluno " << (i+1) << ": ";
  cin>>aluno[i].matricula;
  cout<<"\nDigite o nome do aluno " << (i+1) << ": ";
  cin>>aluno[i].nome;
  cout<<"\n\nDigite o edereço do aluno " << (i+1) << ": ";
  cin>>aluno[i].endereco;
  cout<<"\n\nDigite a média geral do aluno " << (i+1) << ": ";
  cin>>aluno[i].mediageral;
}
  
for(i=0; i<quant; i++){
  cout<<"\n\nMatricula do aluno " << (i+1) << ": " << aluno[i].matricula;
  cout<<"\nNome do aluno " << (i+1) << ": " << aluno[i].nome;
  cout<<"\nEndereço do aluno " << (i+1) << ": " << aluno[i].endereco;
  cout<<"\nDigite a média geral do aluno " << (i+1) << ": " << aluno[i].mediageral;
} 

for(i=0; i<quant; i++){
  cout<<"\n\nMatricula do aluno " << (i+1) << ": " << aluno[i].matricula;
  cout<<"\nNome do aluno " << (i+1) << ": " << aluno[i].nome;
  cout<<"\nEndereço do aluno " << (i+1) << ": " << aluno[i].endereco;
  cout<<"\nDigite a média geral do aluno " << (i+1) << ": " << aluno[i].mediageral + 0.5;
}   

  


  
}
