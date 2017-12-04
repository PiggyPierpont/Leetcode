
public class number_two {
	
	public static void main(String[] arge) {
		int[] A = {1,1,2,2,2,2,3,4,2,4,5,6,4,6,6};
		
		int length = RDuplicates(A);
		
		System.out.println("length = " + length);
		for (int i = 0;i < length;i++) {
			System.out.print(A[i] + ",");
		}
	}
	
	static int RDuplicates(int[] A) {
		int length = A.length;
		boolean q = false;
		for (int i = 0;i < length;i++) {
			for(int j = i + 1;j < length;) {
				if ((A[j] == A[i]) && (q == false)) {
					j++;
					q = true;
					
				} else {
					if (A[j] == A[i]) {
						int a = A[j];
						A[j] = A[length - 1];
						A[length - 1] = a;
						length--;
					}
					if (A[j] != A[i]) {
						j++;
					} 
				}
			}
			q = false;
		}
		return length;
	}
}
