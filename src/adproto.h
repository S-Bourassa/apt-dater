/* apt-dater - terminal-based remote package update manager
 *
 * $Id$
 *
 * Authors:
 *   Andre Ellguth <ellguth@ibh.de>
 *   Thomas Liske <liske@ibh.de>
 *
 * Copyright Holder:
 *   2008-2009 (C) IBH IT-Service GmbH [http://www.ibh.de/apt-dater/]
 *
 * License:
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this package; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef _ADPROTO_H
#define _ADPROTO_H

#define _ADP_QUOTE(x)		#x
#define ADP_QUOTE(x)		_ADP_QUOTE(x)

/* Version history. */
#define ADP_VERSION_0_1		0.1
#define ADP_VERSION_0_2		0.2
#define ADP_VERSION_0_3		0.3
#define ADP_VERSION_0_4		0.4
#define ADP_VERSION_0_5		0.5

/* Most current protocol version. */
#define ADP_CURRENT_VERSION	ADP_VERSION_0_5


/* Features since protocol version 0.4 */
#define ADP_FEATVER_UUID	ADP_VERSION_0_4

/* Features since protocol version 0.5 */
#define ADP_FEATVER_ADPERR	ADP_VERSION_0_5


/* Patterns */
#define ADP_STRLEN_UUID		36
#define ADP_PATTERN_UUID	"UUID: %"ADP_QUOTE(ADP_STRLEN_UUID)"s"

#define ADP_STRLEN_ADPERR	255
#define ADP_PATTERN_ADPERR	"ADPERR: %"ADP_QUOTE(ADP_STRLEN_ADPERR)"s"

#endif /* _ADPROTO_H */
