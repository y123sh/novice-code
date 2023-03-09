
import java.util.Random;
import java.util.Scanner;

public class Class {
	private static Scanner scanner;

	public static void main(String[] args) {
		Random rand = new Random();
		Scanner sc = new Scanner(System.in);//鍒涘缓瀵硅薄
		int n;
		boolean input;
		do {
			int num = rand.nextInt(45);
			System.out.println(num);// 鐢熸垚闅忔満鏁�
			Menu();
			System.out.println("请选择:");
			n = sc.nextInt();//
			System.out.println(n);
		} while (n == 1);
	}
	public static void Menu() {
		System.out.println("*******************************");
		System.out.println("****1.继续抽查 0.停止抽查 ********");
		System.out.println("*******************************");
		
	}
}