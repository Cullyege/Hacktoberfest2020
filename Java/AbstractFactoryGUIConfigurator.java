/*
Reference: https://refactoring.guru/design-patterns/abstract-factory
Please refer to the pseudocode given there to understand this commit
 */

import java.util.concurrent.ThreadLocalRandom;

interface Button{
    void paint();
}

class WinButton implements Button{
    @Override
    public void paint() {
        System.out.println("Window button is painted");
    }
}

class MacButton implements Button{
    @Override
    public void paint() {
        System.out.println("Mac button is painted");
    }
}

interface CheckBox{
    void paint();
}

class WinCheckBox implements CheckBox{
    @Override
    public void paint() {
        System.out.println("Window checkbox is painted");
    }
}

class MacCheckBox implements CheckBox{
    @Override
    public void paint() {
        System.out.println("Mac checkbox is painted");
    }
}

interface GUIFactory{
    Button createButton();
    CheckBox createCheckBox();
}

class WinFactory implements GUIFactory{
    @Override
    public Button createButton() {
        return new WinButton();
    }

    @Override
    public CheckBox createCheckBox() {
        return new WinCheckBox();
    }
}

class MacFactory implements GUIFactory{
    @Override
    public Button createButton() {
        return new MacButton();
    }

    @Override
    public CheckBox createCheckBox() {
        return new MacCheckBox();
    }
}

class GUI{
    private GUIFactory guiFactory;
    public CheckBox checkBox;
    public Button button;

    GUI(OSType osType){
        guiFactory =  (osType == OSType.WINDOWS) ? new WinFactory() : new MacFactory() ;
        System.out.println("OS chosen: " + osType.toString() );

        // creating
        button = guiFactory.createButton();
        checkBox = guiFactory.createCheckBox();
    }
}


public class AbstractFactoryGUIConfigurator {

    //client code using the abstract factory
    public static void main(String[] args) {
        OSType winType = OSType.WINDOWS;
        OSType macType = OSType.MAC;

        GUI WinGUI = new GUI(winType);
        WinGUI.checkBox.paint();
        WinGUI.button.paint();

        GUI MacGUI = new GUI(macType);
        MacGUI.checkBox.paint();
        MacGUI.button.paint();
    }
}

enum OSType{
    WINDOWS(0), MAC(1);

    public final int value;
    OSType(int value) {
        this.value = value;
    }
}
