#include <iostream>
#include <vector>

// SearchBehavior Interface
class SearchBehavior {
public:
    virtual std::string search(const std::vector<int>& arr, int target) = 0;
};

// Concrete Implementation of Binary Search
class BinarySearch : public SearchBehavior {
public:
    std::string search(const std::vector<int>& arr, int target) override {
        // Binary search implementation goes here
        return "Binary Search";
    }
};

// Concrete Implementation of Linear Search
class LinearSearch : public SearchBehavior {
public:
    std::string search(const std::vector<int>& arr, int target) override {
        // Linear search implementation goes here
        return "Linear Search";
    }
};

// Concrete Implementation of Interpolation Search
class InterpolationSearch : public SearchBehavior {
public:
    std::string search(const std::vector<int>& arr, int target) override {
        // Interpolation search implementation goes here
        return "Interpolation Search";
    }
};

// Calculator class using the Strategy Design Pattern
class Calculator {
private:
    SearchBehavior* searchStrategy;

public:
    void setSearchStrategy(SearchBehavior* strategy) {
        searchStrategy = strategy;
    }

    std::string performSearch(const std::vector<int>& arr, int target) {
        if (searchStrategy == nullptr) {
            return "No search strategy set.";
        }

        return searchStrategy->search(arr, target);
    }
};

int main() {
    // Test case
    std::vector<int> arr = {1, 3, 5, 7, 9};
    int target = 5;

    Calculator calculator;
    BinarySearch binarySearch;
    LinearSearch linearSearch;
    InterpolationSearch interpolationSearch;

    calculator.setSearchStrategy(&binarySearch);
    std::cout << "Using search algorithm: " << calculator.performSearch(arr, target) << std::endl;

    calculator.setSearchStrategy(&linearSearch);
    std::cout << "Using search algorithm: " << calculator.performSearch(arr, target) << std::endl;

    calculator.setSearchStrategy(&interpolationSearch);
    std::cout << "Using search algorithm: " << calculator.performSearch(arr, target) << std::endl;

    return 0;
}