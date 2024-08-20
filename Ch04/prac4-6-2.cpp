// fix the class below so that all the member functions are inline

class product
{
    int price;

public:;

    product(int price);

    int get_price() const;
    void set_price(int price);
};

product::product(int price) : price(price) {}

int product::get_price() const { return price; }
void product::set_price(int price) { this->price = price; }