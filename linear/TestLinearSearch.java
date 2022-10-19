package linear;

import java.util.Date;

public class TestLinearSearch {

	public static void main(String args[]) {

		LinearSearch ls = new LinearSearch();

		int array[] = { 3, 4, 5, 6, 7, 8, 9};
		int x = 8;

		System.out.println(new Date().getTime());
		int result = ls.linearSearch(array, x);

		if (result == -1)
			System.out.println("Element not found");
		else
			System.out.println("Element found at index: " + result);
		System.out.println(new Date().getTime());
	}

}
