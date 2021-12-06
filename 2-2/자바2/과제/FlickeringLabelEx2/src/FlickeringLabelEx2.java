import java.awt.*;
import javax.swing.*;

class FlickeringLabel extends JLabel implements Runnable {
	private long delay; 
	public FlickeringLabel(String text, long delay)
	{
		super(text);
		this.delay = delay;
		setOpaque(true);
		Thread th = new Thread(this);
		th.start();
	}
	@Override
	public void run() {
		int n=0;
		while(true) {
			if(n == 0)
			setBackground(Color.YELLOW);
			else
			setBackground(Color.GREEN);
			if(n == 0) n = 1;
			else n = 0;
			try {
				Thread.sleep(delay); 
			}
			catch(InterruptedException e) {
			return;
			}
		}
	}
}

class FlickeringLabel2 extends JLabel implements Runnable {
	private long delay; 
	public FlickeringLabel2(String text, long delay)
	{
		super(text);
		this.delay = delay;
		setOpaque(true);
		Thread th = new Thread(this);
		th.start();
	}
	@Override
	public void run() {
		int n=0;
		while(true) {
			if(n == 0)
			setBackground(Color.GREEN);
			else
			setBackground(Color.YELLOW);
			if(n == 0) n = 1;
			else n = 0;
			try {
				Thread.sleep(delay); 
			}
			catch(InterruptedException e) {
			return;
			}
		}
	}
}

public class FlickeringLabelEx2 extends JFrame {
	public FlickeringLabelEx2() {
		setTitle("FlickeringLabelEx 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		FlickeringLabel fLabel = new FlickeringLabel("건국대학교",1000);
	
		FlickeringLabel2 fLabel2 = new FlickeringLabel2("소프트웨어전공",1000);
		
		c.add(fLabel);
		c.add(fLabel2);
		
		setSize(300,150);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		new FlickeringLabelEx2();
	}
}