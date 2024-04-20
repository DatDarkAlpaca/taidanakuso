#pragma once
#include <Qt>
#include "ui_main_window.h"

#include "ui_main_window.h"

namespace taida
{
	class TaidaMainWindow : public QMainWindow
	{
		Q_OBJECT;

	public:
		explicit TaidaMainWindow(QWidget* parent = nullptr);

	private:
		Ui::TaidanaKuso ui;
	};
}