/* === S Y N F I G ========================================================= */
/*!	\file layersetdesc.h
**	\brief Template File
**
**	$Id: layersetdesc.h,v 1.1.1.1 2005/01/07 03:34:37 darco Exp $
**
**	\legal
**	Copyright (c) 2002-2005 Robert B. Quattlebaum Jr., Adrian Bentley
**
**	This package is free software; you can redistribute it and/or
**	modify it under the terms of the GNU General Public License as
**	published by the Free Software Foundation; either version 2 of
**	the License, or (at your option) any later version.
**
**	This package is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
**	General Public License for more details.
**	\endlegal
*/
/* ========================================================================= */

/* === S T A R T =========================================================== */

#ifndef __SYNFIG_APP_ACTION_LAYERSETDSEC_H
#define __SYNFIG_APP_ACTION_LAYERSETDSEC_H

/* === H E A D E R S ======================================================= */

#include <synfig/layer.h>
#include <synfigapp/action.h>

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

namespace synfigapp {

class Instance;

namespace Action {

class LayerSetDesc :
	public Undoable,
	public CanvasSpecific
{
private:

	synfig::Layer::Handle layer;
	synfig::String old_description;
	synfig::String new_description;

public:

	LayerSetDesc();

	static ParamVocab get_param_vocab();
	static bool is_candidate(const ParamList &x);

	virtual bool set_param(const synfig::String& name, const Param &);
	virtual bool is_ready()const;

	virtual void perform();
	virtual void undo();

	ACTION_MODULE_EXT
};

}; // END of namespace action
}; // END of namespace studio

/* === E N D =============================================================== */

#endif
