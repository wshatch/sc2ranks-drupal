# sc2ranks module for drupal

## Usage
1. Make sure you have the profile module enabled.
2. Create two fields for user's to enter character region, character name and character code
data for battle.net, be sure to note the names of these fields.
3. Install and enable the sc2ranks module.
4. Configure permissions to view and administer the sc2ranks module
5. Configure the sc2ranks module @ /admin/settings/sc2ranks be sure to set the
field names you set earlier in the profile configuration panel so sc2ranks module 
knows where to look for a user's character name and code.
6. Check everything is working by visiting a user's profile page that has
set a battle.net character name and id.

### Screenshot
![Sample profile data](http://github.com/ameerkat/sc2ranks-drupal/raw/master/images/readme-sample-profile-data.jpg)

## Theming
You can override theme data by creating your own profile-sc2ranks.tpl.php

Refer to the default profile-sc2ranks.tpl.php for variable data.

## Views Integration
If you have the views module installed you may use the cached data from
sc2ranks.com in a views, simple create a new view of type sc2ranks.
There is a default view at sc2ranks/player_listing containing a listing
of players. You can add associated user to the relationships to get access to 
the user's drupal information in the view. You can add different fields from 
all the information stored in the system about the user.

![Sample views](http://github.com/ameerkat/sc2ranks-drupal/raw/master/images/readme-sample-views.jpg)

## TODO
* Better Theming documentation
* Player Portraits (Merge w/Troyan's Code)
* Better Views integration
	* Custom sort on league field
	* Make image handlers optional, add profile link handlers.
* Make reliance on profile module optional (offer up fields through module if wanted)
