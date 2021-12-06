import java.awt.*;
import javax.swing.*;

class TimerRunnable2 implements Runnable {
	private JLabel WalkingLabel;
	private int index = 20;
	private String text = "동해물과 백두산이 마르고 닳도록하느님이 보우하사 우리나라 만세 무궁화 삼천리 화려 강산 대한 사람 대한으로 길이 보전하세" +
			"남산 위에 저 소나무 철갑을 두른 듯 바람 서리 불변함은 우리 기상일세 무궁화 삼천리 화려 강산 대한 사람 대한으로 길이 보전하세" +
			"가을 하늘 공활한데 높고 구름 없이 밝은 달은 우리 가슴 일편단심일세 무궁화 삼천리 화려 강산 대한 사람 대한으로 길이 보전하세" +
			"이 기상과 이 맘으로 충성을 다하여 괴로우나 즐거우나 나라 사랑하세 무궁화 삼천리 화려 강산 대한 사람 대한으로 길이 보전하세";
	public TimerRunnable2( JLabel WalkingLabel ) {
		this.WalkingLabel = WalkingLabel;
	}
	@Override
	public void run() {
    	int i = 0;
        while(true) {
            WalkingLabel.setText(text.substring(i, index));            
            try {
                Thread.sleep(500);
            }
            catch(InterruptedException e) { return; }
            index++;
            i++;
        }
    }
}

public class MovingText extends JFrame {
	public MovingText() {
		setTitle( "Moving Text" );
		setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
		
		Container c = getContentPane();
		c.setLayout( new FlowLayout() );
		
		JLabel WalkingLabel = new JLabel();
		WalkingLabel.setFont( new Font("Gothic", Font.ITALIC, 30) );
		c.add( WalkingLabel );
		
		setSize( 1500, 150 );
		setVisible( true );
		
		Thread th = new Thread( new TimerRunnable2( WalkingLabel ) );
		th.start();
	}

	public static void main(String[] args) {
		new MovingText();
	}

}
