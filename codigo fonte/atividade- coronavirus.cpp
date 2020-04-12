#include <iostream>
using namespace std;

int main()
{
	int n1,n2,s;
	n1=0;
	n2=0;
	cout << "Bem vindo ao programa de ajuda a detectar caso de covid-19 criado pelo grupo 10"<<endl;
	cout << "digite (0) para nao e (1) para sim"<<endl;
	cout<< "voce esta com congestao nasal? "<<endl;
	cin >> n1;
	
	if (n1==1)
	{
	    cout << "voce esta com tose? "<<endl;
	    cin >> n1;
	    
	    if (n1==1)
		{
	    	cout << "voce esta sentido febre? "<<endl;
	    	cin >> n1;
	    	
	    	if (n1==1)
	    	{
	    		cout << "voce esta com diarreia? "<<endl;
	    		cin >> n1;
	    		
	    		if (n1==1)
	    		{
	    			cout << "voce apresenta os sintomas do coronavirus. se voce estiver no grupo de risco por favor va ao medico, se nao, procure ficar em isolamento em casa para nao transmitir"<<endl;
	    				
				}
				
				else
				{
					cout << "voce apresenta sintomas de uma gripe, mas caso piore favor procurar um medico"<<endl;
				 } 
			}
			
			else
			{
				cout << "voce apresenta sintomas de um resfriado, mas caso piore favor procurar um medico"<<endl;
			}
		}
	    
		else
	    {
		    cout << "voce apresenta sintomas de rinite alergica, mas caso piore favor procurar um medico"<<endl;
		}
	
	}
	
	else
	{
		cout << "voce nao apresenta nenhum sintoma, mas por favor lave as maos e qualquer coisa procure um medico"<<endl;
	}
	cout<<"qualquer duvida procure informaçoes no site do governo:https://www.saude.gov.br/"<<endl;
	system ("pause");
	return 0;
}
/* https://www.bbc.com/portuguese/brasil-51946693
   https://www.saude.gov.br/o-ministro/746-saude-de-a-a-z/46490-novo-coronavirus-o-que-e-causas-sintomas-tratamento-e-prevencao-3
   https://g1.globo.com/bemestar/coronavirus/noticia/2020/03/21/covid-19-gripe-resfriado-e-alergias-tem-sintomas-parecidos-mas-duracao-e-evolucao-sao-diferentes.ghtml
Grupo 10:
David pequeno marinho
Marcus Emanuel Correia Das neves
Matheus  marcaci olivo ferreira
Luiz Matheus Correia Das Neves
Weslley de Oliveira Lima*/
