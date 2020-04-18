#include <iostream>
#include <stdlib.h>
#include <string>
#include <functional>
#include <vector>

using namespace std;
int brojac=0;
int m;
int n;
vector<vector<string>> parser(::istream& )
{ 
  cout << "Unesite dimenzije MXN, te nakon toga unesite elemente tj '*' i' .'i za kraj unosa stisnuti CTRL+D "<< endl;
  string red;
  vector<vector<string>> matrica;
  while(cin >>m>> n){
    vector<string> linija;
    if (m<0 || n<0 ){throw string{"Unijeli ste dimenzije manje od nule"};}
    if (m==0 || n==0 ){throw string{"Kraj"};}
    if (m != 0 && n != 0) 
      {
        brojac++;
        for (int i = 0; i < m; i++ ) 
        {
	        cin >> red;
          if(red.size()!=n){throw string{"Pogresan broj karaktera"};}
                for(auto znak: red){
	      if (znak != '*' && znak!= '.')
	        throw string{"Pogresan unos znaka u polje!"};}
      linija.push_back(red);
    }
    matrica.push_back(linija);
  }}
return matrica;
}

vector<vector<string>> rijesi(vector<vector<string>> matrica)
{ 
  for(auto& polje:matrica)
  {
  	for(int i=0;i<polje.size();++i)
  	{
  		for(int j=0;j<polje[i].size();++j)
  		{
  			if(polje[i].at(j)=='.')
  			{
  				polje[i][j]='0';
  				if(i!=0){
  					if(polje[i-1][j]=='*')  polje[i][j]++;
  					if(j!=0) if(polje[i-1][j-1]=='*') polje[i][j]++;
  					if(j!=polje[i].size()-1) if(polje[i-1][j+1]=='*') polje[i][j]++;
				    } 
				  if(i!=polje.size()-1){
  					  if(polje[i+1][j]=='*')polje[i][j]++;
  					  if(j!=0) if(polje[i+1][j-1]=='*')polje[i][j]++;
  				  	if(j!=polje[i].size()-1) if(polje[i+1][j+1]=='*')polje[i][j]++;
				  }
				  if(j!=polje[i].size()-1) if(polje[i][j+1]=='*')polje[i][j]++; 
				  if(j!=0) if(polje[i][j-1]=='*')polje[i][j]++;
			  }
		  }
  	}
  }
  return matrica;
}


void ispis(vector<vector<string>> matrica)
{
  cout << "Polje #" << brojac << ":\n";
	for (auto red: matrica) 
  { 
    for (auto kolona: red)  
    {
      cout << kolona <<endl;
    }
  }
  cout <<endl;
}

int main()
{
  try
  {
    ispis(rijesi(parser(cin)));
  }
  catch (string a) {cout << a;};
  return 0;
}
