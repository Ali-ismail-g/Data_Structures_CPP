/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.sigma_notation_standard_deviation;

import static java.lang.Math.sqrt;
import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author aliesmail
 */
public class SigmaNotationAndCorrelation {

    double aveX = 0, aveY = 0, numerator = 0, denominator = 0, denominatorSum = 0, correlation;

    public double sigmaNotaion() {
        float ave = 0, a = 0, b = 0;
        double sd = 0;
        int n = 0;
        ArrayList<Integer> arr = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        System.out.println("add number of elements?");
        n = sc.nextInt();
        System.out.println("add elements to array: ");
        for (int i = 0; i < n; i++) {
            arr.add(sc.nextInt());
            ave += arr.get(i);
        }
        ave /= n;
        for (int i = 0; i < n; i++) {
            a += Math.pow(arr.get(i) - ave, 2);
        }
        System.out.println("a value is  " + a);
        b = a / n;
        System.out.println("b value is  " + b);
        sd = Math.sqrt(b);

        return sd;
    }

    public double correlation(double[] variableX, double[] variableY) {
        double sumX = sumVariables(variableX);
        double sumY = sumVariables(variableY);
        //System.out.println("x " + sumX + " " + "y " + sumY);
        aveX = sumX / variableX.length;
        aveY = sumY / variableY.length;
        numerator = calculateNumerator(variableX, aveX, variableY, aveY);
        denominator = calculateDenominator(variableX, aveX, variableY, aveY);
        correlation = numerator / denominator;
        return correlation;
    }

    public double sumVariables(double[] variable) {
        double sum = 0;
        for (double number : variable) {
            sum += number;
        }
        return sum;
    }

    public double calculateNumerator(double[] variableX, double aveX, double[] variableY, double aveY) {
        double res = 0;
        for (int i = 0; i < variableX.length; i++) {
            res += (variableX[i] - aveX) * (variableY[i] - aveY);
        }
        return res;
    }

    public double calculateDenominator(double[] variableX, double aveX, double[] variableY, double aveY) {
        double firstSum = 0;
        double secondSum = 0;
        for (int i = 0; i < variableX.length; i++) {
            firstSum += Math.pow((variableX[i] - aveX),2);
            secondSum += Math.pow((variableY[i] - aveY),2);
        }

        return Math.sqrt(firstSum*secondSum);
    }

}
