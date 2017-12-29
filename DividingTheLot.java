import java.util.Scanner;
import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        int casos = lectura.nextInt(), i, piratas, motin, max=0, division=0;
        int[] arr = new int [1000];
        
        while(casos != 0){
            piratas = lectura.nextInt();
            motin = lectura.nextInt();
            for(i=0; i<motin; i++){
                arr[i] = lectura.nextInt();
            }
            
            Arrays.sort(arr, 0, motin);
            division = motin/(piratas+1);
            
            for(i=motin-1; i>=0; i--){
                if(division == 0)
                    break;
                
                max += arr[i];
                division--;
            }
            
            System.out.println(max);
            max = 0;
            casos--;
        }
    }
    
}
