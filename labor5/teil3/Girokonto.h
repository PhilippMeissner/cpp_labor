class Girokonto : public Konto {
  public:
    Girokonto(double nummer);
    void ueberweisen();
    void abheben();
  protected:
    static double DISPO;
};
