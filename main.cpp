#include <iostream>
#include "Bike.cpp"
#include "Car.cpp"

int main()
{
    std::cout << ".......................................Welcome to the Vehicle Selection Program!........................................" << std::endl;

    bool exitProgram = false;

    while (!exitProgram) {
        std::cout << "Would you like to choose a car or a bike?" << std::endl;
        std::cout << "Enter '1' for a car, '2' for a bike, or '0' to exit: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 0:
                exitProgram = true;
                break;
            case 1:
                std::cout << "Please choose a car brand:" << std::endl;
                std::cout << "1. Maruti" << std::endl;
                std::cout << "2. Tata Motors" << std::endl;
                std::cout << "3. Hyundai" << std::endl;
                std::cout << "4. Mahindra" << std::endl;
                std::cout << "5. Honda" << std::endl;
                std::cout << "Enter the corresponding number: ";

                int carChoice;
                std::cin >> carChoice;

                switch (carChoice) {
                    case 1: {
                        Maruti Maruti("Model X");
                        Maruti.chooseModel();
                        break;
                    }
                    case 2: {
                        TataMotors TataMotors("Model X");
                        TataMotors.chooseModel();
                        break;
                    }
                    case 3: {
                        Hyundai hyundai("Model X");
                        hyundai.chooseModel();
                        break;
                    }
                    case 4: {
                        Mahindra mahindra("Model X");
                        mahindra.chooseModel();
                        break;
                    }
                    case 5: {
                        Hondacar Hondacar("Model X");
                        Hondacar.chooseModel();
                        break;
                    }
                    default:
                        std::cout << "Invalid choice. Please try again." << std::endl;
                        break;
                }
                break;
            case 2:
                std::cout << "Please choose a bike brand:" << std::endl;
                std::cout << "1. Honda" << std::endl;
                std::cout << "2. Hero" << std::endl;
                std::cout << "3. Ola Electricals" << std::endl;
                std::cout << "4. Apache" << std::endl;
                std::cout << "5. Pulsar" << std::endl;
                std::cout << "Enter the corresponding number: ";

                int bikeChoice;
                std::cin >> bikeChoice;

                switch (bikeChoice) {
                    case 1: {
                        Honda Honda("Model X");
                        Honda.chooseModel();
                        break;
                    }
                    case 2: {
                        Hero hero("Model X");
                        hero.chooseModel();
                        break;
                    }
                    case 3: {
                        OlaElectricals ola("Model X");
                        ola.chooseModel();
                        break;
                    }
                    case 4: {
                        Apache apache("Model X");
                        apache.chooseModel();
                        break;
                    }
                    case 5: {
                        Pulsar pulsar("Model X");
                        pulsar.chooseModel();
                        break;
                    }
                    default:
                        std::cout << "Invalid choice. Please try again." << std::endl;
                        break;
                }
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

        std::cout << std::endl; // Add a newline for better readability

    }

    std::cout << "Thank you for using the Vehicle Selection Program! Goodbye!" << std::endl;

    return 0;
}
