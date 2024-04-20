#include "taida_main_window.hpp"

namespace taida
{
	TaidaMainWindow::TaidaMainWindow(QWidget* parent)
		: QMainWindow(parent)
	{
		ui.setupUi(this);
		setContextMenuPolicy(Qt::CustomContextMenu);
	}
}