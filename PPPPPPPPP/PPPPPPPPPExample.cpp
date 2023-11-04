// Copyright Wilbert Bernadi Tomoh. All Rights Reserved.

#include <iostream>
#include <fstream>
#include <memory>
#include "Chef.h"
#include "ItalianChef.h"
#include "Daffa.h"
#include "Wilbert.h"

int main()
{
    try {
        auto chef = std::make_unique<Chef>(55, 177);
        chef->makeSpecialDish();

        auto italianchef = std::make_unique<ItalianChef>(88, 190);
        italianchef->makeSpecialDish();

        auto daffa = std::make_unique<Daffa>(66, 190);
        daffa->DaffaIsSmart();

        auto wilbert = std::make_unique<Wilbert>(77, 177);
        wilbert->WilbertYW();

        // Open the log file for writing
        std::ofstream logfile("log.txt");

        // Log a message indicating successful execution to the log file
        logfile << "Program executed successfully" << std::endl;

        // Close the log file
        logfile.close();
    }
    catch (const std::exception& e) {
        // Open the log file for writing
        std::ofstream logfile("log.txt");

        // Log an error message to the log file
        logfile << "Error: " << e.what() << std::endl;

        // Close the log file
        logfile.close();

        return 1;
    }

    return 0;
}