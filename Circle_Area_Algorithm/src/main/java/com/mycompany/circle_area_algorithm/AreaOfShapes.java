/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.circle_area_algorithm;

/**
 *
 * @author aliesmail
 */
public class AreaOfShapes {
    public float areaOfCircle(float r){
        float A = (float) (Math.PI * (r*r)); 
        return A;
    }
    public float areaOfParallelogram(float b,float h){
        float A = b*h;
        return A;
    }
    public float areaOfTrapezoid(float a,float b,float h){
       float A = (float) ((0.5*(a+b))*h);
       return A;
    }
    
}
