/*   	MyPrestations - c++ / Qt  - Individual time tracking system
	Copyright (C) 2007-2008 by Geoffroy Culot and others

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License version 2 as 
	published by the Free Software Foundation.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

	The GNU General Public License is also available online:
	http://www.gnu.org/licenses/gpl.html

	Thanks a lot to all the people that have already contributed to this project!

	Special thanks to the following people for their contribution:
	Nobody for the moment ...

	Project Homepage:
	Developer Homepage: 
	Mailing lists: 
	Changelog: 

	Anyone is invited to help to improve MyPrestations. Therefore any kind of feedback
	is welcome. Maybe you even would like to hack the code and send us your
	changes. This would help a lot and is highly appreciated. Think about it :-)
	Subscribing to the developer mailing list might be a first step (see above).

	Send feedback to:  	 elyxis at users.berlios.de

	TO DO 

	Make a logo Descktop icone and systray icone + About Box picture
	Manage diferent project
	Made Myprestations code translatable ( and translate it ! 
 
*/
#include <QApplication>
#include <QDialog>
 
#include "prestations.h"
#include "ui_prestations.h"


int main(int argc, char *argv[])
{
    
    QApplication app(argc, argv);
    prestation *dialog = new prestation;
    dialog->show();
     
     
    return app.exec();
}
