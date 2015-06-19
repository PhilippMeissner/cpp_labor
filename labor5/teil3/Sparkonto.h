class Sparkonto : public Konto {
  public:
    Sparkonto(double nummer);
    void abheben();
    void jahresZinsenAddieren();
  protected:
    static double ZINS;
};
