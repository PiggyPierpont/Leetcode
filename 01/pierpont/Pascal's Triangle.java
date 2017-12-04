import java.util.ArrayList;
import java.util.List;

public class number_four {
	public static void main(String[] arge) {
		final int NU = 10;
		List<List> List = Pascal(NU);
		}
	}

	static List Pascal (int N) {
		
		List<List> list = new ArrayList<List>();
		
		for (int i = 0;i < N;i++) {
			
			list.add(new ArrayList<Integer>())
			;
			list.get(i).add(1);
			
			if(i > 1) {
				for (int j = 1;j < i;j++) {
					list.get(i)
					    .add((int)(list.get(i - 1).get(j - 1)) + 
							 (int)(list.get(i - 1).get(j)));
				}
			}
			
			list.get(i).add(1);
		}
		
		return list;
	}
}
