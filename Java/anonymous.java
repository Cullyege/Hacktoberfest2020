class Anoy {
   public void display() {
      System.out.println("Inside the anoy class");
   }
}

class Anonymoustest {
   public void createClass() {
      Anoy a1 = new Anoy() {
         public void display() {
            System.out.println("Inside an anonymous class.");
         }
      };
      a1.display();
   }
}

class Main {
   public static void main(String[] args) {
       Anonymoustest a = new Anonymoustest();
       a.createClass();
   }
}
