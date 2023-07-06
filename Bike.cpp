#include <iostream>
#include <string>

class Bike {
protected:
    std::string brand;
    std::string model;

public:
    Bike(std::string brand, std::string model) {
        this->brand = brand;
        this->model = model;
    }

    void ride() {
        std::cout << "Riding the " << brand << " " << model << "!" << std::endl;
    }
};

class Honda : public Bike {
public:
    Honda(std::string model) : Bike("Honda", model) {}

    void chooseModel() {
    std::cout << "Please choose a Honda model:" << std::endl;
    std::cout << "1. Honda Shine" << std::endl;
    std::cout << "2. Honda Unicorn" << std::endl;
    std::cout << "3. Honda Hornet 2.0" << std::endl;
    std::cout << "Enter the corresponding number: ";

    int modelChoice;
    std::cin >> modelChoice;

    switch (modelChoice) {
            case 1:
            model = "Honda Shine";
            std::cout << "Honda Shine is a popular commuter bike by Honda." << std::endl;
            std::cout << "Here are some details of Honda Shine:" << std::endl;
            std::cout << " - Price: Rs. 72,787 onwards" << std::endl;
            std::cout << " - Engine: 124 cc" << std::endl;
            std::cout << " - Power: 10.7 bhp @ 7,500 rpm" << std::endl;
            std::cout << " - Torque: 11 Nm @ 6,000 rpm" << std::endl;
            std::cout << " - Mileage: 65 km/l" << std::endl;
            break;
        case 2:
            model = "Honda Unicorn";
            std::cout << "Honda Unicorn is a reliable and comfortable bike by Honda." << std::endl;
            std::cout << "Here are some details of Honda Unicorn:" << std::endl;
            std::cout << " - Price: Rs. 97,356 onwards" << std::endl;
            std::cout << " - Engine: 162.7 cc" << std::endl;
            std::cout << " - Power: 12.91 bhp @ 7,500 rpm" << std::endl;
            std::cout << " - Torque: 14 Nm @ 5,500 rpm" << std::endl;
            std::cout << " - Mileage: 60 km/l" << std::endl;
            break;
        case 3:
            model = "Honda Hornet 2.0";
            std::cout << "Honda Hornet 2.0 is a stylish and powerful bike by Honda." << std::endl;
            std::cout << "Here are some details of Honda Hornet 2.0:" << std::endl;
            std::cout << " - Price: Rs. 1,28,572 onwards" << std::endl;
            std::cout << " - Engine: 184.4 cc" << std::endl;
            std::cout << " - Power: 17.26 bhp @ 8,500 rpm" << std::endl;
            std::cout << " - Torque: 16.1 Nm @ 6,000 rpm" << std::endl;
            std::cout << " - Mileage: 50 km/l" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    ride();
}

};

class Hero : public Bike {
public:
    Hero(std::string model) : Bike("Hero", model) {}

    void chooseModel() {
    std::cout << "Please choose a Hero model:" << std::endl;
    std::cout << "1. Hero Splendor" << std::endl;
    std::cout << "2. Hero HF Deluxe" << std::endl;
    std::cout << "3. Hero Xpulse" << std::endl;
    std::cout << "Enter the corresponding number: ";

    int modelChoice;
    std::cin >> modelChoice;

    switch (modelChoice) {
        case 1:
            model = "Hero Splendor";
            std::cout << "Hero Splendor is a popular commuter bike by Hero." << std::endl;
            std::cout << "Here are some details of Hero Splendor:" << std::endl;
            std::cout << " - Price: Rs. 61,785 onwards" << std::endl;
            std::cout << " - Engine: 97.2 cc" << std::endl;
            std::cout << " - Power: 8.36 bhp @ 8,000 rpm" << std::endl;
            std::cout << " - Torque: 8.05 Nm @ 6,000 rpm" << std::endl;
            std::cout << " - Mileage: 81 km/l" << std::endl;
            break;
         case 2:
            model = "Hero HF Deluxe";
            std::cout << "Hero HF Deluxe is an affordable and efficient bike by Hero." << std::endl;
            std::cout << "Here are some details of Hero HF Deluxe:" << std::endl;
            std::cout << " - Price: Rs. 60,920 onwards" << std::endl;
            std::cout << " - Engine: 97.2 cc" << std::endl;
            std::cout << " - Power: 7.91 bhp @ 8,000 rpm" << std::endl;
            std::cout << " - Torque: 8.05 Nm @ 6,000 rpm" << std::endl;
            std::cout << " - Mileage: 70 km/l" << std::endl;
            break;
        case 3:
            model = "Hero Xpulse";
            std::cout << "Hero Xpulse is an off-road adventure bike by Hero." << std::endl;
            std::cout << "Here are some details of Hero Xpulse:" << std::endl;
            std::cout << " - Price: Rs. 1.17 Lakh onwards" << std::endl;
            std::cout << " - Engine: 199.6 cc" << std::endl;
            std::cout << " - Power: 17.8 bhp @ 8,500 rpm" << std::endl;
            std::cout << " - Torque: 16.45 Nm @ 6,500 rpm" << std::endl;
            std::cout << " - Mileage: 40 km/l" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    ride();
}


    
};

class OlaElectricals : public Bike {
public:
    OlaElectricals(std::string model) : Bike("Ola Electricals", model) {}

    void chooseModel() {
    std::cout << "Please choose an Ola Electricals model:" << std::endl;
    std::cout << "1. Ola S1" << std::endl;
    std::cout << "2. Ola S1 Air" << std::endl;
    std::cout << "Enter the corresponding number: ";

    int modelChoice;
    std::cin >> modelChoice;

    switch (modelChoice) {
        case 1:
            model = "Ola S1";
            std::cout << "Ola S1 is an electric scooter by Ola Electric." << std::endl;
            std::cout << "Here are some details of Ola S1:" << std::endl;
            std::cout << " - Price: Rs. 1.29 Lakh" << std::endl;
            std::cout << " - Range: Up to 121 km on a single charge" << std::endl;
            std::cout << " - Top Speed: 115 km/h" << std::endl;
            std::cout << " - Motor Power: 8.5 kW" << std::endl;
            std::cout << " - Battery Capacity: 2.98 kWh" << std::endl;
            std::cout << " - Charging Time: 4.48 hours (0-100%)" << std::endl;
            std::cout << " - Weight: 125 kg" << std::endl;
            std::cout << " - Tyre Size: Front - 90/90-12, Rear - 90/90-12" << std::endl;
            std::cout << " - Brakes: Front - Disc, Rear - Drum" << std::endl;
            break;
        case 2:
            model = "Ola S1 Air";
            std::cout << "Ola S1 Air is an electric scooter by Ola Electric." << std::endl;
            std::cout << "Here are some details of Ola S1 Air:" << std::endl;
            std::cout << " - Price: Rs. 85,099" << std::endl;
            std::cout << " - Range: Up to 121 km on a single charge" << std::endl;
            std::cout << " - Top Speed: 90 km/h" << std::endl;
            std::cout << " - Motor Power: 8.5 kW" << std::endl;
            std::cout << " - Battery Capacity: 2.98 kWh" << std::endl;
            std::cout << " - Charging Time: 4 hours (0-100%)" << std::endl;
            std::cout << " - Weight: 125 kg" << std::endl;
            std::cout << " - Tyre Size: Front - 90/90-12, Rear - 90/90-12" << std::endl;
            std::cout << " - Brakes: Front - Disc, Rear - Drum" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    ride();
}

};

class Apache : public Bike {
public:
    Apache(std::string model) : Bike("Apache", model) {}

    void chooseModel() {
        std::cout << "Please choose an Apache model:" << std::endl;
        std::cout << "1. RTR 160" << std::endl;
        std::cout << "2. RR 310" << std::endl;
        std::cout << "3. RTR 200 4V" << std::endl;
        std::cout << "Enter the corresponding number: ";

        int modelChoice;
        std::cin >> modelChoice;

        switch (modelChoice) {
            case 1:
                model = "RTR 160";
                std::cout << "TVS Apache RTR 160 is a sports_naked bike available at a price range of Rs. 1.13 Lakh to 1.26 Lakh in India." << std::endl;
               std::cout << "It is available in 5 variants and 5 colours. The Apache RTR 160 is powered by a 159cc BS6 engine mated to a 5-speed gearbox." << std::endl;
               std::cout << "This engine develops a power of 15.53 ps and a torque of 13.9 nm." << std::endl;
               std::cout << "The TVS Apache RTR 160 gets disc brakes in the front and rear. It weighs 138 kg and has a fuel tank capacity of 12 liters." << std::endl;
                break;
            case 2:
                model = "RR 310";
            std::cout << "TVS Apache RR 310 is a fully-faired sports bike available at a price range of Rs. 2.49 Lakh to 2.72 Lakh in India." << std::endl;
            std::cout << "It is available in 2 variants and 2 colours. The Apache RR 310 is powered by a 312.2cc BS6 engine mated to a 6-speed gearbox." << std::endl;
            std::cout << "This engine develops a power of 33.5 ps and a torque of 27.3 nm." << std::endl;
            std::cout << "The TVS Apache RR 310 gets dual-channel ABS and disc brakes in the front and rear. It weighs 174 kg and has a fuel tank capacity of 11 liters." << std::endl;
                break;
            case 3:
                model = "RTR 200 4V";
            std::cout << "TVS Apache RTR 200 4V is a sports bike available at a price range of Rs. 1.35 Lakh to 1.50 Lakh in India." << std::endl;
            std::cout << "It is available in 4 variants and 4 colours. The Apache RTR 200 4V is powered by a 197.75cc BS6 engine mated to a 5-speed gearbox." << std::endl;
            std::cout << "This engine develops a power of 20.82 ps and a torque of 17.25 nm." << std::endl;
            std::cout << "The TVS Apache RTR 200 4V gets dual-channel ABS and disc brakes in the front and rear. It weighs 153 kg and has a fuel tank capacity of 12 liters." << std::endl;
             break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

        ride();
    }
};

class Pulsar : public Bike {
public:
    Pulsar(std::string model) : Bike("Pulsar", model) {}
    
    void chooseModel() {
    std::cout << "Please choose a Pulsar model:" << std::endl;
    std::cout << "1. Pulsar 150" << std::endl;
    std::cout << "2. Pulsar 180" << std::endl;
    std::cout << "3. Pulsar 220F" << std::endl;
    std::cout << "Enter the corresponding number: ";

    int modelChoice;
    std::cin >> modelChoice;

    switch (modelChoice) {
        case 1:
            model = "Pulsar 150";
            std::cout << "Bajaj Pulsar 150 is a sports bike available at a price range of Rs. 1.05 Lakh to 1.08 Lakh in India." << std::endl;
            std::cout << "It is available in 3 variants and 7 colours. The Pulsar 150 is powered by a 149.5cc BS6 engine mated to a 5-speed gearbox." << std::endl;
            std::cout << "This engine develops a power of 14 ps and a torque of 13.4 Nm." << std::endl;
            std::cout << "The Bajaj Pulsar 150 gets disc brakes in the front and rear. It weighs 144 kg and has a fuel tank capacity of 15 liters." << std::endl;
            break;
        case 2:
            model = "Pulsar 180";
            std::cout << "Bajaj Pulsar 180 is a sports bike available at a price range of Rs. 1.10 Lakh to 1.14 Lakh in India." << std::endl;
            std::cout << "It is available in 2 variants and 4 colours. The Pulsar 180 is powered by a 178.6cc BS6 engine mated to a 5-speed gearbox." << std::endl;
            std::cout << "This engine develops a power of 16.78 ps and a torque of 14.52 Nm." << std::endl;
            std::cout << "The Bajaj Pulsar 180 gets disc brakes in the front and rear. It weighs 156 kg and has a fuel tank capacity of 15 liters." << std::endl;
            break;
        case 3:
            model = "Pulsar 220F";
            std::cout << "Bajaj Pulsar 220F is a sports bike available at a price range of Rs. 1.28 Lakh to 1.32 Lakh in India." << std::endl;
            std::cout << "It is available in 1 variant and 2 colours. The Pulsar 220F is powered by a 220cc BS6 engine mated to a 5-speed gearbox." << std::endl;
            std::cout << "This engine develops a power of 20.11 ps and a torque of 18.55 Nm." << std::endl;
            std::cout << "The Bajaj Pulsar 220F gets disc brakes in the front and rear. It weighs 160 kg and has a fuel tank capacity of 15 liters." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    ride();
}

};
