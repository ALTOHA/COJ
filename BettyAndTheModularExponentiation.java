import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        int casos;
        BigInteger a, b, modulo = new BigInteger("1000000000");
        
        casos = lectura.nextInt();
        
        while(casos!=0){
            a = lectura.nextBigInteger();
            b = lectura.nextBigInteger();
            casos--;
            
            a = a.modPow(b, modulo);
            
            System.out.println(a);
        }
        
    } 
}
