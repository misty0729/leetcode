class People {
    private double xx;
    public void setXX(double x) {
       xx=x;
    }
    public double getDoubleXX() {
       return xx;
    }
}
class Student extends People {//子类继承父类
    int xx;
    public int getXX() {
       return xx;
    }
}
public class overrideExample {
  public static void main(String[] args) {
      Student stu=new Student();
      stu.xx=20;        //合法，子类对象的xx是int型
      System.out.println("对象stu的x的值是:"+stu.getXX());
      stu.xx=20.1;    //非法，因为子类对象的xx已经不是int型

      stu.setXX(20.1); //子类对象调用继承的方法操作隐藏的double型变量xx
      double m=stu.getDoubleXX();//子类对象调用继承的方法操作隐藏的double型变量xx
      System.out.println("对象stu隐藏的x的值是:"+m);
  }  
}