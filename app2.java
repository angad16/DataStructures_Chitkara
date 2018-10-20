import java.awt.*;
import java.applet.Applet;
/*<applet code="app2.class" width="500" height="500">
  <param name="ename" value="Gaurav"></applet>*/
public class app2 extends Applet
{
  String s;
  public void init()
  {
    setBackground(Color.blue);
    setForeground(Color.yellow);
    Font f=new Font("Times New Roman",Font.ITALIC,50);
    setFont(f);
    s=getParameter("ename");
    if(s==null)
    {
      s="Student";
    }
  }
  public void paint(Graphics g)
  {
    g.drawString("Welcome "+s,100,100);
  }
}