/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaoptionpane;

import java.util.Scanner;
import javax.swing.JOptionPane;
/**
 *
 * @author Cruz Badillo
 */

public class JavaOptionPane {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) { // programa para que use ventanas
        String cadena;
        int entero;
        char caracter;
        double decimal;
        //Scanner entrada = new Scanner(System.in);
        cadena = JOptionPane.showInputDialog("Digite una cadena: ");
        entero = Integer.parseInt(JOptionPane.showInputDialog("Digite un entero: "));
        caracter = JOptionPane.showInputDialog("Escriba un caracter: ").charAt(0);
        decimal = Double.parseDouble(JOptionPane.showInputDialog("Escriba un decimal: "));
        
        // Mostrar todos los datos
        JOptionPane.showMessageDialog(null, "La cadena es " + cadena);
        JOptionPane.showMessageDialog(null, "El numero entero es " + entero);
        JOptionPane.showMessageDialog(null, "El caracter es " + caracter);
        JOptionPane.showMessageDialog(null, "El decimal es " + decimal);
        
        
        
    }
    
}
