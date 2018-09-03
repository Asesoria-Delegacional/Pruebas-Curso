
package operadoresaritmeticos;
import java.util.Scanner;
/**
 *
 * @author Cruz Badillo
 */
public class OperadoresAritmeticos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        /*Hacer un programa que calcule e imprima la suma de 3 calificaciones*/
        Scanner entrada;
        entrada = new Scanner(System.in);
        float numeros[3], suma;
        
        for(int i = 0; i < 3; i++) {
            System.out.println("Escriba el numero " + (i+1) + ": ");
            numeros[i] = entrada.nextFloat();
            
        }
        
    }
    
}
