public class PixFactory implements FabricaPagamento<Pix>{
    @Override
    public Pix criarPagamento() {
        return new Pix();
    }
}
