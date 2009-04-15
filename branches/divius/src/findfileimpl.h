/*
* This file is part of QDevelop, an open-source cross-platform IDE
* Copyright (C) 2007  Jean-Luc Biord
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
* Contact e-mail: Jean-Luc Biord <jl.biord@free.fr>
* Program URL   : http://qdevelop.org
*
*/

#ifndef FINDFILEIMPL_H
#define FINDFILEIMPL_H
//
#include "ui_findfiles.h"
//
class QWidget;
class QListWidget;
//
class FindFileImpl : public QDialog, public Ui::FindFile
{
Q_OBJECT
public:
	FindFileImpl(QWidget * parent, QStringList directories, QListWidget *listResult, QListWidget *findLines);

	void setDefaultWord( QString s);
private slots:
	void on_chooseDirectoryButton_clicked();
	void on_findButton_clicked();
	void find( QString directory );
protected:
	void showEvent(QShowEvent* _pEvent);
private:
	QWidget *m_parent;
	QListWidget *m_listResult, *m_listLines;
	QString defaultWord;
	void findInFile( QString filename );
	bool m_stop;
	
	//variables used to remember where the search begins
	QString m_searchDirectory;
	int m_recursiveDepth;
};
#endif