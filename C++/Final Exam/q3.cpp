#include <iostream>
#include <vector>
#include <string>

// Observer interface
class Observer {
public:
    virtual void update(const std::string& song) = 0;
};

// Subject interface
class Subject {
public:
    virtual void registerObserver(Observer* observer) = 0;
    virtual void removeObserver(Observer* observer) = 0;
    virtual void notifyObservers(const std::string& song) = 0;
};

// Concrete Observer
class User : public Observer {
private:
    std::string name;

public:
    User(const std::string& userName) : name(userName) {}

    void update(const std::string& song) override {
        std::cout << "User " << name << " received new song: " << song << std::endl;
    }
};

// Concrete Subject
class MusicStreamingService : public Subject {
private:
    std::vector<Observer*> observers;
    std::vector<std::string> library;

public:
    void registerObserver(Observer* observer) override {
        observers.push_back(observer);
    }

    void removeObserver(Observer* observer) override {
        for (auto it = observers.begin(); it != observers.end(); ++it) {
            if (*it == observer) {
                observers.erase(it);
                break;
            }
        }
    }

    void notifyObservers(const std::string& song) override {
        for (Observer* observer : observers) {
            observer->update(song);
        }
    }

    void addSong(const std::string& song) {
        library.push_back(song);
        notifyObservers(song);
    }
};

int main() {
    std::cout << "Hello! Welcome to the Music Streaming service!" << std::endl;

    MusicStreamingService service;

    User* user1 = new User("John");
    User* user2 = new User("Sarah");
    User* user3 = new User("Mike");

    service.registerObserver(user1);
    service.registerObserver(user2);
    service.registerObserver(user3);

    service.addSong("Song 1");
    service.addSong("Song 2");

    service.removeObserver(user2);

    service.addSong("Song 3");

    delete user1;
    delete user2;
    delete user3;

    return 0;
}