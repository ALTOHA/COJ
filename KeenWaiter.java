import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        int casos = lectura.nextInt(), persona, i, j;
        
        for(i=0; i<casos; i++){
            BigInteger valor = new BigInteger("1"), cont = new BigInteger("2"), uno = new BigInteger("1");
            persona = lectura.nextInt();
            for(j=2; j<=persona; j++){
                valor = valor.multiply(cont);
                cont = cont.add(uno);
            }
            System.out.println(valor);        
        }
    }
    
}
