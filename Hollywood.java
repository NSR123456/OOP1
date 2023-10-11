
package hollywood;

abstract class hollywood_a {
    abstract void genre();
    abstract void length();
    abstract void year();
    abstract void cast();
    abstract void rating();
    }
class nun2 extends hollywood_a
{
void genre(){System.out.println("horror");}
void lenght(){System.out.println("1h 50m");}
void year(){System.out.println("2023");}
void cast(){System.out.println("taissa farmiga");}
void rating(){System.out.println("5.9");}

    @Override
    void length() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
}
class wish extends hollywood_a
{
void genre(){System.out.println("disney");}
void lenght(){System.out.println("1h 50m");}
void year(){System.out.println("2023");}
void cast(){System.out.println("princess");}
void rating(){System.out.println("5.9");}

    @Override
    void length() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
}
class creator extends hollywood_a
{
void genre(){System.out.println("adventurous");}
void lenght(){System.out.println("1h 50m");}
void year(){System.out.println("2023");}
void cast(){System.out.println("xy");}
void rating(){System.out.println("5.9");}

    @Override
    void length() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
}
public class Hollywood
{   public static void main (String args[])
    {
    hollywood_a h= new nun2();
    h.genre();
    h.cast();
    hollywood_a k= new wish();
    k.genre();
    k.cast();
    }
}
