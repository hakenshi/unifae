public abstract class Creator {
    public void createProduct() {
        Product product = this.factoryMethod();
        System.out.println(product);
    }
    public abstract Product factoryMethod();
}
