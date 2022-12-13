/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package triangle;

/**
 *
 * @author mati
 */
public class Triangle extends Thread{
    private int altura;
    private int base;
    public Triangle(int altura,int base){
        this.altura=altura;
        this.base=base;
        
    }
    
    public void run(){
        if(altura==0){
            altura=5;
        }
         if(base==0){
            base=5;
        }
        int area = (base*altura)/2;
        System.out.println(" Base: "+base+" Altura: "+altura+" Area: "+area);
    
    }
    
}
