import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        BigInteger numero, uno = new BigInteger("-1"), digitos, temp, cero = new BigInteger("0"), one = new BigInteger("1"), diez = new BigInteger("10");

        int cont, i;
        
        while(true){
            cont = 0;
            BigInteger[] res = new BigInteger[1000];
           numero = lectura.nextBigInteger();
           
           if(numero.compareTo(uno) == 0){
               break;
           }
           if(numero.compareTo(diez) == -1){
                System.out.println("1"+numero);
            }
           else{           
                digitos = new BigInteger("9");

                while(digitos.compareTo(one) != 0){
                    if(digitos.compareTo(one) == 0)
                        break;

                    temp = numero.remainder(digitos);

                    if(temp.compareTo(cero) == 0){
                        res[cont] = digitos;
                        cont++;
                        numero = numero.divide(digitos);
                    }
                    else
                        digitos = digitos.add(uno);

                    if(digitos.compareTo(one) == 0 && numero.compareTo(one) > 0){
                        cont = 1;
                        break;
                    }                    
                }
                if(cont > 1){
                    for(i=cont-1; i>=0; i--){
                        if(i != 0)
                            System.out.print(res[i]);
                        else
                            System.out.println(res[i]);
                    }
                }
                else{
                    System.out.println("There is no such number.");
                }

            }
        }
    }
    
}
