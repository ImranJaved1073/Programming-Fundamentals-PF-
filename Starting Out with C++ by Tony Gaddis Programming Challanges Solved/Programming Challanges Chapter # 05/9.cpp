#include <iostream>
using namespace std;
int main()
{
    float occupancy_rate = 0,
        rooms_occupied = 0,
        total_rooms = 0;

    int num_of_rooms,
        num_of_floors,
        total_rooms_used = 0,
        total_rooms_occupied = 0,
        total_rooms_unoccupied = 0;

    cout << "How many floors does your hotel have? ";
    while (!(cin >> num_of_floors) || (num_of_floors < 1))
    {
        cout << "\nERROR: number of floors must be\n"
            << "greater that 0 \n";
        cin.clear();
        cin.ignore(1230, '\n');
        cout << "\nHow many floors does your hotel have? ";
    }

    for (int i = 1; i <= num_of_floors; i++)
    {
        if (i == 13)
        {
            cout << "\nSkipping 13th floor.\n";
        }
        else
        {
            cout << "\nHow many rooms does floor number " << i << " have?";
            while (!(cin >> num_of_rooms) || (num_of_rooms < 10))
            {
                cout << "\nERROR: enter a number greater than 10:\n";
                cin.clear();
                cin.ignore(123, '\n');
                cout << "\nHow many rooms does floor number " << i << " have? ";
            }

            total_rooms += num_of_rooms;

            cout << "\nHow many rooms are occupied on that floor?";
            while (!(cin >> rooms_occupied) || (rooms_occupied < 1) || (rooms_occupied > num_of_rooms))
            {
                cout << "\nERROR: enter a rooms occupiednumber greater than 0:\n";
                cout << "and rooms occupies must be smaller than total rooms on floor.\n";
                cin.clear();
                cin.ignore(123, '\n');
                cout << "\nHow many rooms are occupied on that floor? ";
            }
            total_rooms_used += rooms_occupied;
        }

    }

    total_rooms_unoccupied = total_rooms - total_rooms_used;
    cout << "\nTotal rooms unoccupied = "
        << total_rooms_unoccupied << endl;

    cout << "Total rooms used = "
        << total_rooms_used << endl;

    cout << "Total number of rooms = "
        << total_rooms << endl;

    occupancy_rate = (total_rooms_used / total_rooms) * 100;
    cout << "Occupancy rate = "
        << occupancy_rate
        << "%." << endl;


    return 0;
}