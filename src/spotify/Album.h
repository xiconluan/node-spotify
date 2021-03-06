#ifndef _ALBUM_H
#define _ALBUM_H

#include <libspotify/api.h>
#include <string>

#include "SpotifyWrapped.h"

using namespace v8;

class Album : public SpotifyWrapped<Album> {
  friend class Player;
  public:
    Album(sp_album* _album) : SpotifyWrapped(), spAlbum(_album) {
      name = std::string(sp_album_name(spAlbum));
    };

    static void init(Handle<Object> target);
    static Handle<Value> getName(Local<String> property, const AccessorInfo& info);
    static Album* getAlbum(sp_album* _spAlbum);
    static void putAlbum(Album* album);

  private:
    static std::map<sp_album*, Album*> albumCache;
    std::string name;
    sp_album* spAlbum;
};

#endif