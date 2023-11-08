#include <iostream>

using namespace std;

#include <iostream>
#include <string>

// Pizza is the abstract base 
class Pizza {
    std::string name;
    float cost;
public:
    Pizza(const std::string& name, const float cost)
        : name(name), cost(cost) {
    }
    virtual ~Pizza() {
    }

    virtual float getcost() {
        return cost;
    }
    virtual std::string getName() {
        return name;
    }
    virtual void cook() = 0;
};
class OlivesPizza : public Pizza {
public:
    OlivesPizza()
        : Pizza("Olives", 100) {
    }
    ~OlivesPizza() {
    }

    void cook() {
        std::cout << "Baking " << getName() << " Pizza." << std::endl;
    }
};

class MexicanPizza : public Pizza {
public:
    MexicanPizza()
        : Pizza("Mexican", 200) {
    }
    ~MexicanPizza() {
    }

    void cook() {
        std::cout << "Baking " << getName() << " Pizza." << std::endl;
    }
};

// Below class is a decorator or wrapper for Pizza
class PizzaToppings : public Pizza {
    // Here we store the reference
    Pizza& pizza;
public:
    // Constructor
    PizzaToppings(const std::string& toppingName, const float cost, Pizza& pizza)
        : Pizza(toppingName, cost), pizza(pizza) {
    }
    virtual ~PizzaToppings() {
    }

    // Call our wrapper object's functions
    virtual float getcost() {
        return pizza.getcost();
    }
    virtual std::string getName() {
        return pizza.getName();
    }
    virtual void cook() {
        pizza.cook();
    }
};

class ExtraOlivesTopping : public PizzaToppings {
    void addExtraOlivesToPizza() {
        std::cout << "Added extra Olives to the pizza: ["
            << PizzaToppings::getName() << "]." << std::endl;
    }
public:
    ExtraOlivesTopping(Pizza& pizza)
        : PizzaToppings("ExtraOlivesTopping", 10, pizza) {
    }
    ~ExtraOlivesTopping() {
    }

    virtual float getcost() {
        return Pizza::getcost()+ PizzaToppings::getcost();
    }
    virtual std::string getName() {
        return Pizza::getName();
    }

    // Call our wrapper object's function
    virtual void cook() {
        addExtraOlivesToPizza();
        PizzaToppings::cook();
    }
};

class BroccoliTopping : public PizzaToppings {
    void addBroccoliToPizza() {
        std::cout << "Added Broccoli to the pizza: ["
            << PizzaToppings::getName() << "]." << std::endl;
    }
public:
    BroccoliTopping(Pizza& pizza)
        : PizzaToppings("BroccoliTopping", 15, pizza) {
    }
    ~BroccoliTopping() {
    }

    virtual float getcost() {
        return Pizza::getcost() + PizzaToppings::getcost();
    }
    virtual std::string getName() {
        return Pizza::getName();
    }

    // Call our wrapper object's function
    virtual void cook() {
        addBroccoliToPizza();
        PizzaToppings::cook();
    }
};

int main(int argc, char **argv)
{
    // Create MexicanPizza
    MexicanPizza mexicanpizza = MexicanPizza();

    // Add ExtraOlivesTopping
    ExtraOlivesTopping mexicanPizzaWithExtraOlivesTopping(mexicanpizza);

    // Now cook
    mexicanPizzaWithExtraOlivesTopping.cook();

    std::cout << "Total cost: " 
        << mexicanPizzaWithExtraOlivesTopping.getcost() << std::endl;

    return 0;
}