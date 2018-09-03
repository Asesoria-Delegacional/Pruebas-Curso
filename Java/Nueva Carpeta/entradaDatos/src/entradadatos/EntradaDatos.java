package entradadatos;

import java.util.Scanner;

/**
 *
 * @author Cruz Badillo
 */
public class EntradaDatos {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int numero_int;
        float numerof;
        double numerod;
        char palabrac;
        String palabras;
        Scanner entrada1, entrada2, entrada3;
        entrada1 = new Scanner(System.in);
        entrada2 = new Scanner(System.in);
        
        
        System.out.print("Escriba un entero: ");        numero_int = entrada1.nextInt();
        System.out.println("");
        System.out.println("Escriba un flot: ");        numerof = entrada2.nextFloat();
        System.out.println("Escriba un caracer: ");     palabrac = entrada1.next().charAt(0);
        System.out.println("Escriba una cadena: ");     palabras = entrada1.nextLine();
        
        /*              Valores escritos
        -------------------------------------------------*/
        System.out.println("------------  Valores escritos ---------------\n");
        System.out.println("Valor del entero: " + numero_int);
        System.out.println("Valor del float: " + numerof);
        System.out.println("Valor del caracter: " + palabrac);
        System.out.println("Valor de la cadena: " + palabras);
    }
    
}
