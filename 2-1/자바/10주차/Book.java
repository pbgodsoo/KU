
public class Book {

	String title;
	String author;
	
	public Book(String t){
		title = t; author = "unknown";
	}
	
	public Book(String t, String a){
		title = t; author = a;
	}
	
	public static void main(String [] args){
		Book littlePrince = new Book("Le Petit Prince", "Saint-Exupery");
		Book loveStory = new Book("Chunhyang-jeon");
		System.out.println(littlePrince.title + ": " + littlePrince.author);
		System.out.println(loveStory.title + ": " + loveStory.author);
	}
}
