#include <iostream>
#include <string>

class Car {
protected:
    std::string model;
    std::string brand;

public:
    Car(std::string model, std::string brand) {
        this->model = model;
        this->brand = brand;
    }

    void drive() {
        std::cout << "Driving the " << brand << " " << model << "!" << std::endl;
    }
};

class Maruti : public Car {
public:
 Maruti(std::string model) : Car(model, "Maruti") {}

    void chooseModel() {
        std::cout << "Please choose a Maruti model:" << std::endl;
        std::cout << "1. Maruti Alto" << std::endl;
        std::cout << "2. Maruti Swift Dzire" << std::endl;
        std::cout << "3. Maruti Brezza" << std::endl;
        std::cout << "Enter the corresponding number: ";

        int modelChoice;
        std::cin >> modelChoice;

        switch (modelChoice) {
            case 1:
                model = "Maruti Alto";
                std::cout << "Maruti Alto is a compact hatchback by Maruti Suzuki." << std::endl;
                std::cout << "Here are some details of Maruti Alto:" << std::endl;
                std::cout << " - Price: Rs. 3.00 - 4.41 Lakh" << std::endl;
                std::cout << " - Engine: 796 cc" << std::endl;
                std::cout << " - Power: 47.3 bhp" << std::endl;
                std::cout << " - Torque: 69 Nm" << std::endl;
                std::cout << " - Mileage: 22.05 km/l" << std::endl;
                break;
            case 2:
                model = "Maruti Swift Dzire";
                std::cout << "Maruti Swift Dzire is a compact sedan by Maruti Suzuki." << std::endl;
                std::cout << "Here are some details of Maruti Swift Dzire:" << std::endl;
                std::cout << " - Price: Rs. 5.98 - 9.02 Lakh" << std::endl;
                std::cout << " - Engine: 1197 cc" << std::endl;
                std::cout << " - Power: 88.50 bhp" << std::endl;
                std::cout << " - Torque: 113 Nm" << std::endl;
                std::cout << " - Mileage: 23.26 km/l" << std::endl;
                break;
            case 3:
                model = "Maruti Brezza";
                std::cout << "Maruti Brezza is a compact SUV by Maruti Suzuki." << std::endl;
                std::cout << "Here are some details of Maruti Brezza:" << std::endl;
                std::cout << " - Price: Rs. 7.51 - 11.41 Lakh" << std::endl;
                std::cout << " - Engine: 1462 cc" << std::endl;
                std::cout << " - Power: 103.26 bhp" << std::endl;
                std::cout << " - Torque: 138 Nm" << std::endl;
                std::cout << " - Mileage: 17.03 km/l" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

        drive();
    }
};

class TataMotors : public Car {
public:
    TataMotors(std::string model) : Car(model, "Tata Motors") {}

    void chooseModel() {
    std::cout << "Please choose a Tata Motors model:" << std::endl;
    std::cout << "1. Tata Nexon" << std::endl;
    std::cout << "2. Tata Punch" << std::endl;
    std::cout << "3. Tata Taigo" << std::endl;
    std::cout << "Enter the corresponding number: ";

    int modelChoice;
    std::cin >> modelChoice;

    switch (modelChoice) {
        case 1:
            model = "Tata Nexon";
            std::cout << "Tata Nexon is a compact SUV by Tata Motors." << std::endl;
            std::cout << "Here are some details of Tata Nexon:" << std::endl;
            std::cout << " - Price: Rs. 7.19 - 13.20 Lakh" << std::endl;
            std::cout << " - Engine: 1199 - 1497 cc" << std::endl;
            std::cout << " - Power: 118.3 - 108.5 bhp" << std::endl;
            std::cout << " - Torque: 170 - 260 Nm" << std::endl;
            std::cout << " - Mileage: 17 - 21.5 km/l" << std::endl;
            break;
        case 2:
            model = "Tata Punch";
            std::cout << "Tata Punch is a compact SUV by Tata Motors." << std::endl;
            std::cout << "Here are some details of Tata Punch:" << std::endl;
            std::cout << " - Price: Rs. 5.49 - 8.39 Lakh" << std::endl;
            std::cout << " - Engine: 1199 - 1497 cc" << std::endl;
            std::cout << " - Power: 84.8 - 108.5 bhp" << std::endl;
            std::cout << " - Torque: 113 - 260 Nm" << std::endl;
            std::cout << " - Mileage: 18 - 21.5 km/l" << std::endl;
            break;
        case 3:
            model = "Tata Taigo";
            std::cout << "Tata Taigo is a compact SUV by Tata Motors." << std::endl;
            std::cout << "Here are some details of Tata Taigo:" << std::endl;
            std::cout << " - Price: Rs. 6.00 - 9.00 Lakh" << std::endl;
            std::cout << " - Engine: 1199 cc" << std::endl;
            std::cout << " - Power: 84.8 bhp" << std::endl;
            std::cout << " - Torque: 113 Nm" << std::endl;
            std::cout << " - Mileage: 18.4 km/l" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    drive();
}

};

class Hyundai : public Car {
public:
    Hyundai(std::string model) : Car(model, "Hyundai") {}

    void chooseModel() {
    std::cout << "Please choose a Hyundai model:" << std::endl;
    std::cout << "1. Hyundai Creta" << std::endl;
    std::cout << "2. Hyundai Verna" << std::endl;
    std::cout << "3. Hyundai Venue" << std::endl;
    std::cout << "Enter the corresponding number: ";

    int modelChoice;
    std::cin >> modelChoice;

    switch (modelChoice) {
        case 1:
            model = "Hyundai Creta";
            std::cout << "Hyundai Creta is a compact SUV by Hyundai." << std::endl;
            std::cout << "Here are some details of Hyundai Creta:" << std::endl;
            std::cout << " - Price: Rs. 10.00 - 17.88 Lakh" << std::endl;
            std::cout << " - Engine: 1497 - 1353 cc" << std::endl;
            std::cout << " - Power: 113 - 138 bhp" << std::endl;
            std::cout << " - Torque: 144 - 242 Nm" << std::endl;
            std::cout << " - Mileage: 16.8 - 21.4 km/l" << std::endl;
            break;
        case 2:
            model = "Hyundai Verna";
            std::cout << "Hyundai Verna is a compact sedan by Hyundai." << std::endl;
            std::cout << "Here are some details of Hyundai Verna:" << std::endl;
            std::cout << " - Price: Rs. 9.19 - 15.25 Lakh" << std::endl;
            std::cout << " - Engine: 998 - 1493 cc" << std::endl;
            std::cout << " - Power: 118 - 113 bhp" << std::endl;
            std::cout << " - Torque: 172 - 250 Nm" << std::endl;
            std::cout << " - Mileage: 17.7 - 25 km/l" << std::endl;
            break;
        case 3:
            model = "Hyundai Venue";
            std::cout << "Hyundai Venue is a compact SUV by Hyundai." << std::endl;
            std::cout << "Here are some details of Hyundai Venue:" << std::endl;
            std::cout << " - Price: Rs. 6.92 - 11.77 Lakh" << std::endl;
            std::cout << " - Engine: 998 - 1493 cc" << std::endl;
            std::cout << " - Power: 118 - 99 bhp" << std::endl;
            std::cout << " - Torque: 172 - 171 Nm" << std::endl;
            std::cout << " - Mileage: 17.52 - 23.7 km/l" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    drive();
}

};

class Mahindra : public Car {
public:
    Mahindra(std::string model) : Car(model, "Mahindra") {}

    void chooseModel() {
    std::cout << "Please choose a Mahindra model:" << std::endl;
    std::cout << "1. Mahindra XUV700" << std::endl;
    std::cout << "2. Mahindra Bolero" << std::endl;
    std::cout << "3. Mahindra Thar" << std::endl;
    std::cout << "Enter the corresponding number: ";

    int modelChoice;
    std::cin >> modelChoice;

    switch (modelChoice) {
        case 1:
            model = "Mahindra XUV700";
            std::cout << "Mahindra XUV700 is a premium SUV by Mahindra." << std::endl;
            std::cout << "Here are some details of Mahindra XUV700:" << std::endl;
            std::cout << " - Price: Rs. 11.99 - 20.99 Lakh" << std::endl;
            std::cout << " - Engine: 1997 - 2179 cc" << std::endl;
            std::cout << " - Power: 197 - 200 bhp" << std::endl;
            std::cout << " - Torque: 380 - 450 Nm" << std::endl;
            std::cout << " - Mileage: 12.4 - 15.1 km/l" << std::endl;
            break;
        case 2:
            model = "Mahindra Bolero";
            std::cout << "Mahindra Bolero is a rugged SUV by Mahindra." << std::endl;
            std::cout << "Here are some details of Mahindra Bolero:" << std::endl;
            std::cout << " - Price: Rs. 8.64 - 9.61 Lakh" << std::endl;
            std::cout << " - Engine: 1493 cc" << std::endl;
            std::cout << " - Power: 75 bhp" << std::endl;
            std::cout << " - Torque: 210 Nm" << std::endl;
            std::cout << " - Mileage: 16.7 km/l" << std::endl;
            break;
        case 3:
            model = "Mahindra Thar";
            std::cout << "Mahindra Thar is a legendary off-road SUV by Mahindra." << std::endl;
            std::cout << "Here are some details of Mahindra Thar:" << std::endl;
            std::cout << " - Price: Rs. 12.11 - 14.16 Lakh" << std::endl;
            std::cout << " - Engine: 1997 cc" << std::endl;
            std::cout << " - Power: 150 bhp" << std::endl;
            std::cout << " - Torque: 320 Nm" << std::endl;
            std::cout << " - Mileage: 15.2 km/l" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    drive();
}

};

class Hondacar : public Car {
public:
    Hondacar(std::string model) : Car(model, "Honda") {}
    
    void chooseModel() {
    std::cout << "Please choose a Honda model:" << std::endl;
    std::cout << "1. Honda Amaze" << std::endl;
    std::cout << "2. Honda ELEVATE" << std::endl;
    std::cout << "3. Honda New City" << std::endl;
    std::cout << "Enter the corresponding number: ";

    int modelChoice;
    std::cin >> modelChoice;

    switch (modelChoice) {
        case 1:
            model = "Honda Amaze";
            std::cout << "Honda Amaze is a compact sedan by Honda." << std::endl;
            std::cout << "Here are some details of Honda Amaze:" << std::endl;
            std::cout << " - Price: Rs. 6.32 - 11.15 Lakh" << std::endl;
            std::cout << " - Engine: 1199 - 1498 cc" << std::endl;
            std::cout << " - Power: 88.7 - 98.6 bhp" << std::endl;
            std::cout << " - Torque: 110 - 200 Nm" << std::endl;
            std::cout << " - Mileage: 18.6 - 24.7 km/l" << std::endl;
            break;
        case 2:
            model = "Honda ELEVATE";
            std::cout << "Honda ELEVATE is a premium SUV by Honda." << std::endl;
            std::cout << "Here are some details of Honda ELEVATE:" << std::endl;
            std::cout << " - Price: Rs. 16.00 - 22.00 Lakh" << std::endl;
            std::cout << " - Engine: 1993 cc" << std::endl;
            std::cout << " - Power: 150 bhp" << std::endl;
            std::cout << " - Torque: 350 Nm" << std::endl;
            std::cout << " - Mileage: 12.7 km/l" << std::endl;
            break;
        case 3:
            model = "Honda New City";
            std::cout << "Honda New City is a mid-size sedan by Honda." << std::endl;
            std::cout << "Here are some details of Honda New City:" << std::endl;
            std::cout << " - Price: Rs. 10.99 - 14.84 Lakh" << std::endl;
            std::cout << " - Engine: 1498 - 1799 cc" << std::endl;
            std::cout << " - Power: 98.6 - 119.35 bhp" << std::endl;
            std::cout << " - Torque: 200 - 145 Nm" << std::endl;
            std::cout << " - Mileage: 17.4 - 24.1 km/l" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    drive();
}

};
