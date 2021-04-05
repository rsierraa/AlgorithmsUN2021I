#include <iostream>
#include <fstream>

using namespace std;


int main(){
    

	int input_size=200000;
	int top=199998;

	ofstream archivo;
	string nomdelArch;

	nomdelArch="misDatos";
	
  nomdelArch=nomdelArch+".txt";
	
  archivo.open(nomdelArch.c_str(),ios::out);          //opens or creates the file, and replaces it if already exists  	
	
  if(archivo.fail()){
		cout<<"*No se puede abrir el archivo*";
		exit(1);
	}else{                                              //insert them numbers from 0 to top
		archivo<<input_size<<"\n";
    	archivo<<input_size<<" ";                           //then inserts 200000 twice
      archivo<<input_size<<" ";
		  for(int x=0;x<top;x++){
		    archivo<<x<<" ";	
		  }




  cout<<"*El archivo se creó exitosamente*";	
	
	}

	archivo.close();
	
}
