import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        int competencias, i, max = 0, min = 0, puntos, cont = 0;
        
        competencias = lectura.nextInt();
        for(i=0; i<competencias; i++){
            puntos = lectura.nextInt();
            
            if(i == 0)
                max = min = puntos;
            
            else{
                if(max < puntos){
                       max = puntos; 
                       cont++;
                }
                if(min > puntos){
                    min = puntos;
                    cont++;
                }
            }
        }
        System.out.println(cont);
    }
    
}
