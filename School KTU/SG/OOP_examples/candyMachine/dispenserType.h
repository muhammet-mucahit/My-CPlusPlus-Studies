class dispenserType{

  public:
    dispenserType (int numberOfProducts = 50, int productCost = 50);
    int count();
    int productCost();
    void makeSale();
    
  private:
     int numOfProducts;
     int cost;
};
