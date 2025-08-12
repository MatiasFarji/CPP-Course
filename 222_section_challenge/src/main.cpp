// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    // Unformatted display so you can see how to access the vector elements
    {
        std::cout  << std::left << std::setfill('-') << std::setw(100) << "" << ""  <<  std::endl;
        std::cout << std::right << std::setfill(' ');

        std::string white_spaces((100 - tours.title.length()) / 2, ' ');
        std::cout << std::setw(100) << std::left << '|' + white_spaces + tours.title + (white_spaces.substr(0, white_spaces.length() -1)) + " |" << std::endl;

        std::cout  << std::right << std::setfill('-') << std::setw(100) << "" << std::endl; 
        std::cout << std::right << std::setfill(' ');
    
        std::cout << std::setw(25) << std::left << "|         Country";
        std::cout << std::setw(25) << std::left << "|          City";
        std::cout << std::setw(25) << std::left << "|       Population";
        std::cout << std::setw(25) << std::left << "|          Cost          |" << std::endl;
        std::cout  << std::right << std::setfill('-') << std::setw(100) << "" << std::endl; 
        std::cout << std::right << std::setfill(' ');

    }

    for(auto country : tours.countries) {   // loop through the countries
        std::string country_white_spaces((25 - country.name.length()) / 2, ' ');
        std::cout << std::setw(25) << std::left <<  '|' + country_white_spaces + country.name;

        std::string city_white_spaces((25) / 2, ' ');
        std::cout << std::setw(25) << "|" + city_white_spaces;

        std::string population_white_spaces((25) / 2, ' ');
        std::cout << std::setw(25) << "|" + population_white_spaces;

        std::string living_cost_white_spaces((25) / 2, ' ');
        std::cout << std::setw(25) << "|" + living_cost_white_spaces << "|";

        std::cout << std::endl;

        for(auto city : country.cities) {       // loop through the cities for each country
            std::string country_white_spaces((25) / 2, ' ');
            std::cout << std::setw(25) << "|" + country_white_spaces;

            std::string city_white_spaces((25 - city.name.length()) / 2, ' ');
            std::cout << std::setw(25) << "|" + city_white_spaces + city.name;

            std::string population_white_spaces((25 - std::to_string(city.population).length()) / 2, ' ');
            std::cout << std::setw(25) << "|" + population_white_spaces + std::to_string(city.population);

            std::string living_cost_white_spaces((25 - std::to_string(city.cost).length()) / 2, ' ');
            std::cout << std::setw(25) << "|" + living_cost_white_spaces + std::to_string(city.cost) << "|";

            std::cout << std::endl;

        }

        std::cout  << std::right << std::setfill('-') << std::setw(100) << "" << std::endl; 
        std::cout << std::right << std::setfill(' ');
    }


    std::cout << std::endl << std::endl;
    return 0;
}