import java.util.*;
public class javaCollections {
public static void main(String[] args) {
    HashMap<String,Integer> hm=new HashMap<>();
    hm.put("Akash",20);
    hm.put("Rohan", 30);
    hm.put("Gilgamesh", 10);
    hm.put("Akash", 50);
    System.out.println("Hashmap:"+hm);
    for(Map.Entry<String,Integer> e:hm.entrySet())
    {
        System.out.println("Key:"+e.getKey()+" Value:"+e.getValue());
    }
    ArrayList<Integer> list=new ArrayList<>();
    list.add(3);
    list.add(90);
    list.add(21);
    list.add(50);
    list.add(10);
    Collections.sort(list,Comparator.reverseOrder());
    System.out.println(list);
    int[] arr={2,5,1,90,4,27};
    Arrays.sort(arr);
    for(int e:arr)
    {
        System.out.println(e);
    }
}
}