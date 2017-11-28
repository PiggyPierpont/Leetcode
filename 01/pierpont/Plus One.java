import java.util.ArrayList;
import java.util.List;

public class number_three {
	
	public static void main(String[] arge) {
		List<Integer> List = CreateArray(999);
	}
	
	static List CreateArray (int N) {
		List<Integer> list = new ArrayList<Integer>();
		while ((N + 1) > 0) {
			int n = N % 10;
			list.add(n);
			N /= 10;
		}
		
		return list;
	}
}
