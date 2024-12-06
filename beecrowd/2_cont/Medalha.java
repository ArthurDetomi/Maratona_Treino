import java.util.ArrayList;
import java.util.Scanner;

public class Medalha {

	public static class Pais {
		private int id;
		private String nome;
		private int ouro;
		private int prata;
		private int bronze;

		public Pais(int id, int ouro, int prata, int bronze) {
			this.id = id;
			this.ouro = ouro;
			this.prata = prata;
			this.bronze = bronze;
		}

		public int getId() {
			return id;
		}

		public void setId(int id) {
			this.id = id;
		}

		public int getOuro() {
			return ouro;
		}

		public void setOuro(int ouro) {
			this.ouro = ouro;
		}

		public int getPrata() {
			return prata;
		}

		public void setPrata(int prata) {
			this.prata = prata;
		}

		public int getBronze() {
			return bronze;
		}

		public void setBronze(int bronze) {
			this.bronze = bronze;
		}

		public String getNome() {
			return nome;
		}

		public void setNome(String nome) {
			this.nome = nome;
		}

		@Override
		public String toString() {
			return getNome() + " " + getOuro() + " " + getPrata() + " " + getBronze();
		}
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int N = Integer.parseInt(scanner.nextLine());

		ArrayList<Pais> paisesList = new ArrayList<>();

		for (int i = 0; i < N; i++) {
			String current_pais = scanner.nextLine();

			String[] split = current_pais.split(" ");
			Pais pais = new Pais(i, Integer.parseInt(split[1]), Integer.parseInt(split[2]), Integer.parseInt(split[3]));
			pais.setNome(split[0]);

			paisesList.add(pais);
		}

		paisesList.sort((o1, o2) -> {
			if (o1.getOuro() != o2.getOuro()) {
				return Integer.compare(o2.getOuro(), o1.getOuro());
			} else if (o1.getPrata() != o2.getPrata()) {
				return Integer.compare(o2.getPrata(), o1.getPrata());
			} else if (o1.getBronze() != o2.getBronze()) {
				return Integer.compare(o2.getBronze(), o1.getBronze());
			}
			return String.CASE_INSENSITIVE_ORDER.compare(o1.getNome(), o2.getNome());
		});

		for (Pais pais : paisesList) {
			System.out.println(pais);
		}
	}

}
