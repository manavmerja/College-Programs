#include <iostream>
using namespace std;

class Room {
    int roomId;
    string type;
    float price;
    bool isBooked;

public:
    // Constructor Overloading
    Room() {
        roomId = 0;
        type = "Standard";
        price = 0;
        isBooked = false;
    }

    Room(int id, string t, float p) {
        roomId = id;
        type = t;
        price = p;
        isBooked = false;
    }

    // Method: check room availability
    bool checkAvailability() {
        return !isBooked;
    }

    // Method Overloading: bookRoom
    void bookRoom() {
        if (!isBooked) {
            isBooked = true;
            cout << "Room " << roomId << " booked successfully.\n";
        } else {
            cout << "Room " << roomId << " is already booked.\n";
        }
    }

    void bookRoom(string customerName) {
        if (!isBooked) {
            isBooked = true;
            cout << "Room " << roomId << " booked for " << customerName << ".\n";
        } else {
            cout << "Room " << roomId << " is already booked.\n";
        }
    }

    int getRoomId() {
        return roomId;
    }

    bool getBookingStatus() {
        return isBooked;
    }
};

class Hotel {
    Room rooms[3]; // simple fixed list of rooms

public:
    Hotel() {
        rooms[0] = Room(101, "Deluxe", 2000);
        rooms[1] = Room(102, "Standard", 1500);
        rooms[2] = Room(103, "Suite", 3000);
    }

    void reserveRoom(int roomId) {
        for (int i = 0; i < 3; i++) {
            if (rooms[i].getRoomId() == roomId) {
                rooms[i].bookRoom();
                return;
            }
        }
        cout << "Room not found.\n";
    }

    void checkAvailableRooms() {
        cout << "Available rooms:\n";
        for (int i = 0; i < 3; i++) {
            if (rooms[i].checkAvailability()) {
                cout << "Room ID: " << rooms[i].getRoomId() << " is available.\n";
            }
        }
    }
};

int main() {
    Hotel h;
    h.checkAvailableRooms();
    h.reserveRoom(101);
    h.reserveRoom(101); // Try booking again
    h.checkAvailableRooms();

    return 0;
}