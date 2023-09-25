import java.util.*;
import java.math.*;

public class Multiple {
   
    static class Solve {
        public static boolean ehMultiploDeDezessete(String str) {
            if (str.length() == 1) {
                BigInteger value = new BigInteger(str);
                return value.mod(BigInteger.valueOf(17)).equals(BigInteger.ZERO);
            }

            BigInteger d = new BigInteger(str.substring(str.length() - 1));
            
            BigInteger value = new BigInteger(str.substring(0, str.length() - 1));

            BigInteger resultado = value.subtract(BigInteger.valueOf(5).multiply(d)).abs();
           
            return resultado.mod(BigInteger.valueOf(17)).equals(BigInteger.ZERO);
        }
    }
   
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String str;

        while (true) {
            str = input.nextLine();

            if (str.equals("0")) {
                break;
            }

            if (Solve.ehMultiploDeDezessete(str)) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }

        input.close();
    }
}
