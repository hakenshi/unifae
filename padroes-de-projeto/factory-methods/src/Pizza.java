import java.util.ArrayList;

public abstract class Pizza {
    String name;
    String dough;
    ArrayList<String> toppings = new ArrayList<String>();
    String sauce;
    int time;

    public void prepare() {
        System.out.println("Preparing " + name);
        System.out.printf("Dough: %s\n", dough);
        System.out.println("Toppings: ");
        for (String topping : toppings) {
            System.out.println(topping);
        }
        System.out.printf("Sauce: %s\n", sauce);
        System.out.printf("Time: %d\n", time);
    }

    public void bake() {
        System.out.println("Baking " + name);
    }
    public void cut() {
        System.out.println("Cutting " + name);
    }

    public void box() {
        System.out.println("Boxing " + name);
    }

    public String getName() {
        return name;
    }
}
