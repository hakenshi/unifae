public class CartaoCreditoFactory implements FabricaPagamento<CartaoCredito>{
    @Override
    public CartaoCredito criarPagamento() {
        return new CartaoCredito();
    }
}
