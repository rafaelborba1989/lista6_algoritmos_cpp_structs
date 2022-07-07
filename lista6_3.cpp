/*3. Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias para o cliente são: identidade, nome, endereço e telefone. OBS: Deve ser usada umaestrutura de registro para a construção deste cadastro.*/
#include <iostream>
#include<string>

using namespace std;

struct tClientes{
    int identidade;
    string nome;
    string endereco;
    string telefone;
};

int main() {

  int i;
    
  const int quant = 2;
    
  tClientes cliente[quant];  
  
  cout<<"\nCadastro de clientes: ";
  for(i=0; i<quant; i++){
    cout<<"\nDigite o número de identidade do cliente " << (i+1) << ": ";
    cin>>cliente[i].identidade;
    cout<<"\nDigite o nome do cliente " << (i+1) << ": ";
    cin.ignore();
    getline(cin,cliente[i].nome);
    cout<<"\nDigite o endereço do cliente " << (i+1) << ": ";
    getline(cin,cliente[i].endereco);
    cout<<"\nDigite o telefone do cliente " << (i+1) << ": ";
    getline(cin,cliente[i].telefone);
  }

  for(i=0; i<quant; i++){
    cout<<"\nNúmero de identidade do cliente " << (i+1) << ": " << cliente[i].identidade;
    cout<<"\nNome do cliente " << (i+1) << ": " << cliente[i].nome;
    cout<<"\nEndereço do cliente " << (i+1) << ": " << cliente[i].endereco;
    cout<<"\nTelefone do cliente " << (i+1) << ": " << cliente[i].telefone;
  }
}
