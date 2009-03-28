/*
* This file is part of QDevelop, an open-source cross-platform IDE
* Copyright (C) 2006  Jean-Luc Biord
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version. 
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
* Contact e-mail: Jean-Luc Biord <jlbiord@qtfr.org>
* Program URL   : http://qdevelop.org
*
*/
#include "qpjregexpplannerdialog.h"
#include "replugin.h"

//
QString RePlugin::menuName() const
{
	return "RegExp Planner";
}
//
void RePlugin::start(QWidget * owner)
{
	QpjRegExpPlannerDialog* dialog = new QpjRegExpPlannerDialog;
	dialog->setAttribute(Qt::WA_DeleteOnClose);
	dialog->setWindowFlags(Qt::WindowStaysOnTopHint);
	dialog->show();
	Q_UNUSED(owner);
}

//
bool RePlugin::hasConfigDialog() const
{
	return false;
}

void RePlugin::config()
{
	// Noop
}
//
Q_EXPORT_PLUGIN2(tools-regexp-planner, RePlugin)