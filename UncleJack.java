import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        BigInteger sobrinos, cero = new BigInteger("0");
        int cd;
        
        do{
            sobrinos = lectura.nextBigInteger();
            cd = lectura.nextInt();
            if(sobrinos.compareTo(cero) > 0){
                
                    sobrinos = sobrinos.pow(cd);
                    System.out.println(sobrinos);
                


            }
        }while(sobrinos.compareTo(cero) > 0);
    }
    
}
