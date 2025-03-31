public class PayPalFactory implements FabricaPagamento<PayPal>{
    @Override
    public PayPal criarPagamento() {
        return new PayPal();
    }
}
