package hola_mundo;

import java.util.Scanner;

/**
 *
 * @author Ing. Cruz Badillo
 */
public class Hola_mundo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        
        // Datos no primitivos
        Integer valor = null;
        String palabra = "Hola que hace o que haceee";
        
        // Datos no primitivos
        int x = 3;
        int numero;
        float pi = 3.14159216f;
        char vocal = 'a';
        boolean estado = true;
        final int constante = 2;
        
    
        // constante = 3;
        System.out.println("--------------- NO PRIMITIVOS ----------------");
        System.out.println(valor);
        System.out.println("Contenido de la variable palabra: " + palabra);
        System.out.println("--------------- PRIMITIVOS ----------------");
        System.out.println("Entero: " + x);
        System.out.println("Flotante: " + pi);
        System.out.println("Caracter: " + vocal);
        System.out.println("Booleano: " + estado);
        
        System.out.println("--------------- CONSTANTES ----------------");
        System.out.println("Constante: " + constante);
        
        System.out.println("--------------- Entrada de Datos ----------------");
        System.out.print("Escriba un numero: ");
        numero = entrada.nextInt();
        System.out.println("El valor escrito fue: " +  numero);
    }
    
}
