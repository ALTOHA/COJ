import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        int rojo = lectura.nextInt(), cafe = lectura.nextInt(), lado1, lado2, i;
        if(cafe != 1){
            for(i=1; i<=cafe/2; i++){
                if(cafe % i == 0){
                    
                    lado1 = (cafe / i)+2;
                    lado2 = i+2;  
                    
                    if(lado1*lado2 == cafe+rojo){
                        System.out.println(lado1 +" "+lado2);
                        i = cafe;
                        
                    }
               
                 }
                
            }
        }
        else{
            System.out.println("3 3");
        }
    }   
}
