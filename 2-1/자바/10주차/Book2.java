public class Book2 {

	String title;
	String author;
	
	public Book2() {
		this("", "");
	}
	
	public Book2(String title) {
		this(title, "unknown");
	}
	
	public Book2(String title, String author) {
		this.title = title; this.author = author;
	}
	
	void show() {
		System.out.println( title + ": " + author);
	}
	
	public static void main(String[] args) {
		Book2 littlePrince = new Book2("Le Petit Prince", "Saint-Exupery");
		Book2 loveStory = new Book2("Chunhyang-jeon");
		Book2 emptyBook = new Book2();
		littlePrince.show();
		loveStory.show();

	}

}
