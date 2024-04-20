#include <QApplication>
#include <QSettings>
#include <gui.hpp>

#include <constants.hpp>
#include <utils/filesystem.hpp>
#include <core/taida_settings.hpp>
#include <core/taida_stylesheet.hpp>

static void preInitialize()
{
	QSettings::setDefaultFormat(QSettings::IniFormat);
	QApplication::setOrganizationName("DatDarkAlpaca");
	QApplication::setApplicationName("TaidanaKuso");
	QCoreApplication::setAttribute(Qt::AA_CompressHighFrequencyEvents);
}

int main(int argc, char** argv)
{
	using namespace taida;
	QApplication* app = new QApplication(argc, argv);

	preInitialize();

	TaidaSettings::initialize(paths::getAbsoluteAppPath(SettingsFilename), true);
	TaidaStylesheet::initialize();

	TaidaMainWindow* mainWindow = new TaidaMainWindow;
	mainWindow->show();

	app->exec();
	return 0;
}