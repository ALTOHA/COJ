#include <cstdio>
#include <cstdlib>

class nodo{
	private:
	int valor;
	public:
	nodo *next;
		nodo(int valor){
			this->valor=valor;
			next=NULL;
		}
		int ret(){
			return valor;
		}
};

class pila{
	private:
	nodo *top, *tail;
	public:
		pila(void){
			top=tail=NULL;
		}
		bool isEmpty(pila s){
			return (s.top == NULL);
		}
		void push(int valor, pila s){
			nodo *temp = new nodo(valor);
			if (isEmpty(s)){
				top=tail=temp;
			} 
			else{
				temp ->next = top;
				top = temp;
			}
		}
		int pop(pila s){
			int x;
			nodo *temp=top;
			if (isEmpty(s)){
				exit(1);
			}
			else{
				x = temp -> ret();
				temp=top;
				top = temp ->next;
				delete(temp);
			}
			return x;
		}
};

using namespace std;

int main(){
	pila s;
	int valor;
	while (scanf("%d", &valor) && valor!=-1){
	while(valor!=0){
		s.push(valor%3, s);
		valor/=3;
	}
	while (!s.isEmpty(s)){
			printf ("%d", s.pop(s));			
	}
	
	printf ("\n");
	
	}
	return 0;
}
