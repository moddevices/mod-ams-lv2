#ifndef VCSWITCH_GUI_H
#define VCSWITCH_GUI_H

#include <lvtk-1/lvtk/plugin.hpp>
#include <lvtk-1/lvtk/gtkui.hpp>

#include "labeleddial.hpp"

using namespace lvtk;
using namespace sigc;
using namespace Gtk;

class VCSwitchGUI: public UI<VCSwitchGUI, GtkUI<true>>
{
	public:
		VCSwitchGUI(const std::string& URI);
		void port_event(uint32_t port, uint32_t buffer_size, uint32_t format, const void* buffer);

	protected:
		LabeledDial* m_dialSwitchLevel;
};

#endif