//
// Created by mohan on 3/6/2023.
//

#include "day.h"

namespace calendar
{
    day::day(unsigned int YYYY, unsigned int MM, unsigned int DD, std::vector<event> events)
    {
        this->dateYYYY = YYYY;
        this->dateMM   = MM % 12 == 0 ? 12 : MM % 12 ;
        switch (dateMM)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dateDD = DD % 31;
                break;
            case 4: case 6: case 9: case 11:
                dateDD = DD % 30;
                break;
            case 2:
                dateDD = YYYY % 4 == 0 ? DD % 28 : DD % 29;
        }
    }
} // calendar