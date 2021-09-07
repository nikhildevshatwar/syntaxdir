import java.io.*;

class find_max {
	static int[] set = {1,23,34,6,5,44,33,22,55,11};
	public static void main(String[] args)
	{
		int max = -1;
		for (int counter =0; counter < set.length; counter++)
			if (max < set[counter])
				max = set[counter];
		System.out.println("Max is : " + max);
	}
};
