OS2Web Spotbox
==============================

Description
-----------
This module provides spotboxes as contenttype and views to display them.

Dependencies
-----------

- ctools
- features
- field_group
- file_entity
- image
- media
- os2web_base
- strongarm
- views

Installation
-----------
This module should reside in the modules directory of the installation,
most commonly profiles/os2web/modules/, but alternativly in sites/all/modules
(This could be for development purposes).

See https://github.com/syddjurs/os2web/wiki for further instructions.

This module can also be installed with drush make in your install profile.

Add new types of spotboxes by adding new EPSACrop styles. After creating the new
image style (http://fredericia.dk/admin/config/media/image-styles), be sure to
add it to the spotbox content type (admin/structure/types/manage/os2web_spotbox_box/fields/field_os2web_spotbox_big_image)

Licence and copyright
---------------------
OS2Web is Copyright (c) 2012 Syddjurs Kommune, Denmark

OS2Web is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OS2Web is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Additional Info
---------------
This repository should be governed using Git Flow. for more information see
http://nvie.com/posts/a-successful-git-branching-model/

Note: This module is still dependant on modules in the full OS2Web suite
(https://github.com/OS2web/os2web), as the seperation of those are still WIP.
