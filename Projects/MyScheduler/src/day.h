//
// Created by mohan on 3/6/2023.
//

#ifndef PROJECT_SPRING_2023_DAY_H
#define PROJECT_SPRING_2023_DAY_H

#include <iostream>
#include <vector>

#include "event.h"

namespace calendar
{

    class day
    {
    public:
        // Constructors & Destructors
        day(unsigned YYYY, unsigned MM, unsigned DD, std::vector<event> events);
        ~day();

        // Mutators
        void setDateYYYY (unsigned int YYYY);
        void setDateMM   (unsigned int MM  );
        void setDateDD   (unsigned int DD  );
        void addEvent    (event newEvent);
        void removeEvent (event targetEvent);

        // Getters
        unsigned int getDateYYYY();
        unsigned int getDateMM();
        unsigned int getDateDD();
        std::vector<event> getEvents();
        std::string getWeekday();

        // Comparisons
        int Compare(const day& d);
        bool operator == (const day& d) const;
        bool operator <  (const day& d) const;
        bool operator >  (const day& d) const;
        bool operator <= (const day& d) const;
        bool operator >= (const day& d) const;

        // Arithmetics
        day addDays  (int days);
        day addMonths(int months);
        day addYears (int years);



    private:
        unsigned int dateYYYY;
        unsigned int dateMM;
        unsigned int dateDD;
        std::vector<event> events;


    };

} // calendar

#endif //PROJECT_SPRING_2023_DAY_H
