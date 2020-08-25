#include <iostream>
#include <fstream>
using namespace std;
void imprimir(int a[]);
void insercion(int a[]);
void suma(int a[]);
ofstream archivo;//variable para archivos como global

int main() {  
  archivo.open("ordenamiento.txt", ios::app);
  int a[]={8, 6, 3, 2, 1};
  archivo<<"Elementos originales: \n";
  imprimir(a);
  insercion(a);
  archivo<<"Elementos ordenados: \n";
  imprimir(a);
  suma(a);
  archivo.close();
  
return 0;
}
void imprimir(int a[]){
  for(int i=0;i<5;i++){
    archivo<<"["<<a[i]<<"]\t";
  }
  archivo<<"\n";
}
void insercion(int a[]){
  int aux;
  for(int i=0;i<5;i++){
    aux=a[i];
    int p=i;
    while(p>0){
      if(a[p-1]>aux){
        a[p]=a[p-1];
        a[p-1]=aux;        
      }
      p--;
    }
  }
}
void suma(int a[]){
  int sum=0,it=0;
  for(int i=0;i<5;i++){
    sum=sum+a[i];  
    it=it+1;  
  }
  archivo<<"La suma es: "<<sum<<endl;
  archivo<<"El numero de elementos es: "<<it<<endl;
}