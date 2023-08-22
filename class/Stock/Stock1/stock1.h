#ifndef _STOCK1_H_
#define _STOCK1_H_

class Stock   //class declaration
{
private:
    char company[30];
    int shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val; }   //definition kept separate
public:
    Stock();          //default consteuctor
    Stock(const char *co, int n, double pr);
    ~Stock();         //noisy destructor 
    void acquire(const char *co, int n, double pr);
    void buy(int num, double price);
    void sell(int num, double price);
    void update(double price);
    void show();

};   //note seicolon at the end

#endif /* _STOCK1_H_ */