#include "exercise4-example1.h"
#include <iostream>
#include <math.h>
#include "task1.h"
using namespace std;
using namespace exercise4;

int main()
{
    /* Example task 1 - Car and Truck */
    cout << "\n\n----- Example task 1 (Car and Truck) -----\n\n";

    car c(5, 4, 500);
    truck t(30000, 12, 1200);
    cout << "Car:\n";
    c.show();
    cout << "\nTruck:\n";
    t.show();
    

    /* Example task 1 - Media Collection Tools */
    cout << "\n\n----- Practice task 1 (Media Collection Tools) -----\n";

    Item item((char*)"Action movie", time(0), 1, (char*)"Movie", 3, 19.99, (char*)"The Island");

    cout << "\nItem (toString method output):";

    item.toString();

    cout << "\nMedia type: " << item.getMediaFormat() << "\nDate Purchased: " << item.getDatePurchased() 
         << "\nItem Id: " << item.getItemId() << "\nMedia Format: " << item.getMediaFormat() << "\nNumber of items: " 
         << item.getNumberOfItems() << "\nPrice: " << item.getPrice() << "\nTitle: " << item.getTitle() << "\n\n";

    Movie movie(8.5,(char*)"Action movie", time(0), 1, (char*)"Movie", 3, 19.99, (char*)"The Island");

    cout << "\nMovie (toString method output):";

    movie.toString();

    cout << "\nMedia type: " << movie.getMediaFormat() << "\nRating: " << movie.getRating()
         << "\nItem Id: " << movie.getItemId()  << "\nMedia Format: " << movie.getMediaFormat() << "\nNumber of items: "
         << movie.getNumberOfItems() << "\nPrice: " << movie.getPrice()  << "\nTitle: " << movie.getTitle() << "\n\n";

    Game game(5, (char*)"Armor and weapons", (char*)"Action game", time(0), 1, (char*)"Game", 3, 19.99, (char*)"Doom");

    cout << "\nGame (toString method output):";

    game.toString();

    cout << "\nMedia type: " << game.getMediaFormat() << "\nDificulty Level: " << game.getDificultyLevel() << "\nEquipment: " 
        << game.getEquipment() << "\nItem Id: " << game.getItemId() << "\nMedia Format: " << game.getMediaFormat() << "\nNumber of items: "
        << game.getNumberOfItems() << "\nPrice: " << game.getPrice() << "\nTitle: " << game.getTitle() << "\n\n";

    Music music((char*)"Metallica", (char*)"Metal", time(0), 1, (char*)"Music", 3, 19.99, (char*)"Master of Puppets");

    cout << "\nMusic (toString method output):";

    music.toString();

    cout << "\nMedia type: " << music.getMediaFormat() << "\nBand of Artists: " << music.getBandOfArtists()
        << "\nItem Id: " << music.getItemId() << "\nMedia Format: " << music.getMediaFormat() << "\nNumber of items: "
        << music.getNumberOfItems() << "\nPrice: " << music.getPrice() << "\nTitle: " << music.getTitle() << "\n\n";

    return 0;
}