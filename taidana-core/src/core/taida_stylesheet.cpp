#include "pch.hpp"
#include "taida_settings.hpp"
#include "taida_stylesheet.hpp"

namespace taida
{
	TaidaStylesheet::TaidaStylesheet(QObject* parent)
		: QObject(parent)
	{
		m_Stylesheet = std::make_unique<acss::QtAdvancedStylesheet>();
		initializeStylesheet();
	}

	void TaidaStylesheet::initialize()
	{
		if (!s_Instance)
			s_Instance = new TaidaStylesheet;

		auto currentTheme = s_Instance->stylesheet()->isCurrentThemeDark();
		TaidaSettings::setValue("styles/themes/is_theme_dark", currentTheme);
	}

	void TaidaStylesheet::initializeStylesheet()
	{
		QString absoluteStylePath = TaidaSettings::getString("paths/style_path");
		QString absoluteStyleOutPath = TaidaSettings::getString("paths/style_output_path");

		m_Stylesheet->setStylesDirPath(absoluteStylePath);
		m_Stylesheet->setOutputDirPath(absoluteStyleOutPath);

		auto currentStyle = TaidaSettings::getString("styles/themes/selected_style");
		auto currentTheme = TaidaSettings::getString("styles/themes/selected_theme");

		m_Stylesheet->setCurrentStyle(currentStyle);
		m_Stylesheet->setCurrentTheme(currentTheme);
		m_Stylesheet->updateStylesheet();

		qApp->setStyleSheet(m_Stylesheet->styleSheet());
	}
}