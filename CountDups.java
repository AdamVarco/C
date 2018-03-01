package myPackage;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;
import java.util.Set;

public class CountDups {

	public static void CountedDups(String fileName) throws FileNotFoundException {
		Scanner file = new Scanner(new File(fileName));
		Map<String, Integer> nameAndCount = new HashMap<>(); 
		while (file.hasNext()) {
			String name = file.next();
			name = name.replaceAll("[^\\p{Alpha}]", "");
			Integer count = nameAndCount.get(name);
			if (count == null)  nameAndCount.put(name, 1); 
			 else nameAndCount.put(name, ++count); 
			}
		   Set<Entry<String, Integer>> entrySet = nameAndCount.entrySet();
		    for (Entry<String, Integer> entry : entrySet) {
		    	System.out.println("Word :" + entry.getKey() + " Occurances :" +entry.getValue());
		    }
	}
		
	public static void main (String [] args) throws FileNotFoundException {
		if(args.length==1)
		CountedDups(args[0]);
	}
  
}
