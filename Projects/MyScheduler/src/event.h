//
// TODO: Note that an event can span across days
//

#ifndef PROJECT_SPRING_2023_EVENT_H
#define PROJECT_SPRING_2023_EVENT_H

#include <iostream>
namespace calendar
{

    class event
    {
    public:

        // Constructors
        event(std::string name, unsigned int startingTime, unsigned int endingTime,
              std::string location = "", std::string note = "");
        event(std::string eventCode);

        // Setters
        void setName(std::string newName);
        void setLocation(std::string newLocation);
        void setNote(std::string newNote);
        void setTime(unsigned start, unsigned end);

        // Getters
        std::string  getName();
        std::string  getLocation();
        std::string  getNote();
        unsigned int getStartingTime();
        unsigned int getEndingTime();

        // Methods
        std::string getEventCode();

    private:
        std::string  name;
        std::string  location;
        std::string  note;
        unsigned int startingTime; // In minutes since 0:00 of the day
        unsigned int endingTime;   // In minutes since 0:00 of the day (forced to be later than startingTime)

    };

} // calendar

#endif //PROJECT_SPRING_2023_EVENT_H
