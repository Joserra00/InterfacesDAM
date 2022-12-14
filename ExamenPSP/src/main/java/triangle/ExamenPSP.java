/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package triangle;

import java.util.Random;

/**
 *
 * @author mati
 */
public class ExamenPSP {

    public static void main(String[] args) throws InterruptedException {
        Random r = new Random();
       
        Thread thread1 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
        Thread thread2 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
        Thread thread3 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
        Thread thread4 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
        Thread thread5 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
        Thread thread6 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
        Thread thread7 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
        Thread thread8 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
        Thread thread9 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
        Thread thread10 = new Triangle(r.nextInt(20)*1,r.nextInt(20)*1);
           
        thread1.start();
        thread2.start();
        thread3.start();
        thread4.start();
        thread5.start();
        thread6.start();
        thread7.start();
        thread8.start();
        thread9.start();
        thread10.start();
        
        thread1.join();
        thread2.join();
        thread3.join();
        thread4.join();
        thread5.join();
        thread6.join();
        thread7.join();
        thread8.join();
        thread9.join();
        thread10.join();
    }
}
