class cashRegister {
  
  public:
        int currentBalance();
        cashRegister(int cashIn = 500);
        void acceptAmount(int amountIn);
        
  private:
         int cashOnHand;
};
