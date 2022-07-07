/*2. Elabore um algoritmo que
- Crie a estrutura tAnimal: Registro tAnimal:
nome: string
raca: string
idade: int
- Declare um vetor Animais (5 posições de tAnimal) e cadastre 8 animais;
- Verifique e escreva o nome do animal mais velho;
- Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para
a busca. Se existir animal da raça procurada, informe seus dados (nome e idade);*/
#include <iostream>
#include <string>

using namespace std;

struct tAnimal{
    string nome;
    string raca;
    int idade;
};


int main() {

int i, maioridade=0, posicao, op;
string maisvelho, nomeaux;  
const int quant = 2;
  
tAnimal animal[quant];

cout<<"\nCASDASTRO DE ANIMAIS: ";
for(i=0; i< quant; i++){
  cout<<"\nDigite o nome do animal " << (i+1) << ": ";
  
  getline(cin,animal[i].nome);
  cout<<"\nDigite a raça do animal " << (i+1) << ": ";
  getline(cin,animal[i].raca);
  cout<<"\nDigite a idade do animal " << (i+1) << ": ";
  cin>>animal[i].idade;
  cin.ignore();
  if(animal[i].idade > maioridade){
    maioridade = animal[i].idade;
    maisvelho = animal[i].nome;
  }
}  

  cout<<"\nO animal mais velho tem  " << maioridade << " anos! " << " Seu nome eh " << maisvelho;

 cout<<"\nDeseja buscar animais cadastrados por raça?(1-SIM)(2-NÃO): ";
 cin>>op; 

 if(op==1){
   cout<<"\nDigite nome da raça: \n";
   cin>>nomeaux;
   for(i=0; i<quant; i++){
     if(nomeaux==animal[i].raca){
       cout<<"\n" << animal[i].nome;
              cout<<"\n" << animal[i].idade;

     }
   }
 }else{
   cout<<"\nRaça não cadastrada!";
 }
      
  
}
