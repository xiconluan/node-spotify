'use strict';
/* jshint camelcase: false */
(function(define) {
  define([], function() {
    var events = {
      /* Playlists */
      playlist_new: 'playlist_new',
      playlist_renamed: 'playlist_renamed',
      playlist_tracks: 'playlist_tracks',

      /* general */
      initial_data: 'initial_data',
      logged_in: 'logged_in',
      login: 'login',
      logout: 'logout',
      message: 'message',

      /* player */
      play: 'play',
      next_track: 'next_track',
      now_playing_data_changed: 'now_playing_data_changed'
    };

    return events;
  });

})(typeof angular === 'object' ? function(mods, exports) { angular.module('node-spotify').factory('events', exports);}
  : function(mods, exports) { module.exports = exports(); });
