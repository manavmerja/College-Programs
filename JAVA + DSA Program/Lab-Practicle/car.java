import java.util.*;

interface OnOff{
    void on();
    void off();
}

interface volume{
    void volumeUp();
    void volumeDown();
}

interface temp{
    void tempUp();
    void tempDown();
}    

interface nevigation{
    void navigate();
}

class engine implements OnOff{

    public void on(){
        System.out.println("Engine is ON");
    }
    public void off(){
        System.out.println("Engine is OFF");
    }
 
}

class MusicPlayer implements OnOff, volume{

    public void on(){
        System.out.println("Music Player is ON");
    }
    public void off(){
        System.out.println("Music Player is OFF");
    }
    public void volumeUp(){
        System.out.println("Volume Up");
    }
    public void volumeDown(){
        System.out.println("Volume Down");
    }

}

class AC implements OnOff, temp{

    public void on(){
        System.out.println("AC is ON");
    }
    public void off(){
        System.out.println("AC is OFF");
    }
    public void tempUp(){
        System.out.println("Temperature Up");
    }
    public void tempDown(){
        System.out.println("Temperature Down");
    }

}

class GPS implements OnOff, nevigation{

    public void on(){
        System.out.println("GPS is ON");
    }
    public void off(){
        System.out.println("GPS is OFF");
    }
    public void navigate(){
        System.out.println("Navigating...");
    }

}

public class car {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        engine e = new engine();
        MusicPlayer mp = new MusicPlayer();
        AC ac = new AC();
        GPS gps = new GPS();

        while (true) {
            System.out.println("===================================");
            System.out.println("1)Engine \n2)Music Player \n3)AC \n4)GPS \n5)Exit");
            System.out.print("Enter your choice: ");
            int choice = sc.nextInt();
            if (choice == 5) {
                System.out.println("Exiting...");
                break;
            }
            switch (choice) {
                case 1: {
                    System.out.println("1)ON \n2)OFF");
                    int ch = sc.nextInt();
                    if (ch == 1) {
                        e.on();
                    } else if (ch == 2) {
                        e.off();
                    } else {
                        System.out.println("Invalid choice");
                    }
                    break;
                }
                case 2: {
                    System.out.println("1)ON \n2)OFF \n3)VOLUME UP \n4)VOLUME DOWN");
                    int ch = sc.nextInt();
                    if (ch == 1) {
                        mp.on();
                    } else if (ch == 2) {
                        mp.off();
                    } else if (ch == 3) {
                        mp.volumeUp();
                    } else if (ch == 4) {
                        mp.volumeDown();
                    } else {
                        System.out.println("Invalid choice");
                    }
                    break;
                }
                case 3: {
                    System.out.println("1)ON \n2)OFF \n3)TEMP UP \n4)TEMP DOWN");
                    int ch = sc.nextInt();
                    if (ch == 1) {
                        ac.on();
                    } else if (ch == 2) {
                        ac.off();
                    } else if (ch == 3) {
                        ac.tempUp();
                    } else if (ch == 4) {
                        ac.tempDown();
                    } else {
                        System.out.println("Invalid choice");
                    }
                    break;
                }
                case 4: {
                    System.out.println("1)ON \n2)OFF \n3)NAVIGATE");
                    int ch = sc.nextInt();
                    if (ch == 1) {
                        gps.on();
                    } else if (ch == 2) {
                        gps.off();
                    } else if (ch == 3) {
                        gps.navigate();
                    } else {
                        System.out.println("Invalid choice");
                    }
                    break;
                }
                default:
                    System.out.println("Invalid choice");
                    break;
            }   
        }
    }
}