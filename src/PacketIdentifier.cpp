/***************************************************************************
                          PacketIdentifier.cpp  -  description
                             -------------------
    begin                : Thu Nov 29 2001
    copyright            : (C) 2001, 2013 by Andrea Bulgarelli
    email                : bulgarelli@iasfbo.inaf.it
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software for non commercial purpose              *
 *   and for public research institutes; you can redistribute it and/or    *
 *   modify it under the terms of the GNU General Public License.          *
 *   For commercial purpose see appropriate license terms                  *
 *                                                                         *
 ***************************************************************************/
#include "PacketIdentifier.h"

using namespace PacketLib;


PacketIdentifier::PacketIdentifier(int fn, byte t, word v)
{
    fieldNumber = fn;
    type = t;
    value = v;
}



PacketIdentifier::~PacketIdentifier()
{
    //	cout << "Delete identifier" << endl;
}
