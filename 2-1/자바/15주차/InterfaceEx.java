interface PhoneInterface {
	final int TIMEOUT = 1000;
	void sendCall();
	void receiveCall();
	default void printLogo() {
		System.out.println("** Phone **");
	};
}

class SamsungPhone implements PhoneInterface {
	@Override
	public void sendCall() {
		System.out.println("Ring-ring-ring");
	}
	@Override
	public void receiveCall() {
		System.out.println("You got a call");
	}
	public void flash() {
		System.out.println("Light is on");
	}
}
public class InterfaceEx {

	public static void main(String[] args) {
		SamsungPhone phone = new SamsungPhone();
		phone.printLogo();
		phone.sendCall();
		phone.receiveCall();
		phone.flash();
	}

}
