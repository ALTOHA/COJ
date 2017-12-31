import java.util.Scanner;
import java.math.BigDecimal;

public class Main {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        int casos, cont = 1;
        String resultado;
        
        BigDecimal numero, division = new BigDecimal("5");
        
        casos = lectura.nextInt();
        
        while(casos != 0){
            numero = lectura.nextBigDecimal();
            numero = numero.divide(division);
            
            resultado = numero.toString();
            
            System.out.println("Case "+cont+": "+ resultado.replace('.', ','));             
                
            casos--;
            cont++;
        }
        
    }
    
}
