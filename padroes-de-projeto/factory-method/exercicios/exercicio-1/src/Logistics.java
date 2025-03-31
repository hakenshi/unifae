public abstract class Logistics {
    public Transport planDelivery() {
        var transport = createTransport();
        transport.deliver();
        return transport;
    }

    public abstract Transport createTransport();
}
