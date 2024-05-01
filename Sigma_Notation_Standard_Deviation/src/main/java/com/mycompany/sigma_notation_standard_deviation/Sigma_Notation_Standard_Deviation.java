/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */
package com.mycompany.sigma_notation_standard_deviation;

/**
 *
 * @author aliesmail
 */
public class Sigma_Notation_Standard_Deviation {

    public static void main(String[] args) {
        double[] variableX = {14.2, 16.4, 11.9, 15.2, 18.5, 22.1, 19.4, 25.1, 23.4, 18.1, 22.6, 17.2};
        double[] variableY = {215, 325, 185, 332, 406, 522, 412, 614, 544, 421, 445, 408};
        SigmaNotationAndCorrelation s = new SigmaNotationAndCorrelation();
        System.out.println("Sigma Calculation:  "+s.sigmaNotaion());
        System.out.println("Correlation Calculation:  "+s.correlation(variableX,variableY));
    }
}
