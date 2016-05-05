import java.util.Scanner;

public class DivisorDeTensao{
	
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		double tensao, r1, r2;

		System.out.println("Qual e a tensao(v)?: ");
		tensao = in.nextDouble();

		System.out.println("Valor do resistor 1(Ohm): ");
		r1 = in.nextDouble();

		System.out.println("Valor do resistor 2(Ohm): ");
		r2 = in.nextDouble();

		System.out.printf("O valor da tensao resultante e: %.2f volts", new DivisorDeTensao().dv(tensao, r1, r2));

	}

	public double dv(double tensao, double r1, double r2){

		return tensao*r2/(r1+r2);
	}
}
