/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package monitor;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author mati
 */
public class Coche extends Thread{
    Parking parking;
    public Coche(Parking parking){
        this.parking=parking;
        new Thread(this).start();
    }
    
    public void run(){
        for(int i = 0; i<20; i++){
            try {
               
                this.setName("Coche "+i);
               
                parking.entrar(this.getName());
                Thread.sleep(1000);
                
                if(parking.getPlazas()==10){
                    parking.salir(this.getName());
                }
            } catch (InterruptedException ex) {
                Logger.getLogger(Coche.class.getName()).log(Level.SEVERE, null, ex);
            }
            
        }
    
    
    }
    
    
}
