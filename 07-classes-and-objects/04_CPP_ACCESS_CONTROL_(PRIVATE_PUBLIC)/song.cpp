#include "song.hpp"

// add Song method definitions here:
void Song::add_title(std::string new_title) {

  title = new_title;

}

std::string Song::get_title() {

  return title;

}
// DODAVANJE NOVIH METODA

void Song::add_artist(std::string new_artist) {
  artist = new_artist;
}

std::string Song::get_artist() {

  return artist;
}