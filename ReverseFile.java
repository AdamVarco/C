package test;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class ReverseFile {

	public static void main(String[] args) throws FileNotFoundException {
		if(args.length !=2) 
			return;
		Scanner file = new Scanner(new File(args[0]));
		ArrayList<String> arlist = new ArrayList<String>();
		while (file.hasNext()) {
			arlist.add(file.next());
		 }
		file.close();
		Collections.reverse(arlist);
		PrintWriter pw = new PrintWriter(new File(args[1]));
		for(String s: arlist) {
			System.out.println(s);
			pw.println(s);
		}
		pw.close();
	}

}
