/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package monitor;

import static java.lang.Thread.sleep;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author mati
 */
public class Parking {
    static final int MAX_PLAZAS=10;
    private int plazas;
    
    public Parking(){
        plazas=0;
    
    }

    public int getPlazas() {
        return plazas;
    }

    public void setPlazas(int plazas) {
        this.plazas = plazas;
    }
    public synchronized void entrar(String coche) throws InterruptedException{
        while(plazas==MAX_PLAZAS){
            try {
                wait();
            } catch (InterruptedException ex) {
                
            }
        }
        System.out.println(coche+" entra ");
        plazas++;
        
    }
    public synchronized void salir(String coche) throws InterruptedException{
        sleep(3000);
        System.out.println(coche+" sale ");
        plazas--;
        notify();
        
    }
}
