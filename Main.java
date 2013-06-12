import java.math.BigInteger;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args)
	{
		int t;
		String a1,b1;
		BigInteger [] sum = new BigInteger[201];
		sum[0] = BigInteger.valueOf(1);
		sum[1] = BigInteger.valueOf(2);
		for(int i=3;i<=200;i++)
			sum[i-1]=sum[i-3].add(sum[i-2]);
		Scanner in = new Scanner(System.in);
		t = in.nextInt();
		for(int i =1;i<=t;i++)
		{
			a1 = in.next();
			System.out.println(sum[a1.length()-1]);
		}
	}
}
