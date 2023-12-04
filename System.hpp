class System{
public:
    Graphics graph = Graphics();
    System() {}
    void startProg() {
        start();
        while (graph.isOpen) {
            graph.update();
        }
    }
};