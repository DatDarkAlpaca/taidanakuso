#pragma once
#include <memory>
#include <QObject>
#include <QtAdvancedStylesheet.h>

namespace taida
{
	class TaidaStylesheet : public QObject
	{
		Q_OBJECT;

	private:
		explicit TaidaStylesheet(QObject* parent = nullptr);

	public:
		static void initialize();

	private:
		void initializeStylesheet();

	public:
		static inline TaidaStylesheet* instance() { return s_Instance; }

		std::unique_ptr<acss::QtAdvancedStylesheet>& stylesheet() { return m_Stylesheet; }

	private:
		std::unique_ptr<acss::QtAdvancedStylesheet> m_Stylesheet = nullptr;
		static inline TaidaStylesheet* s_Instance = nullptr;
	};
}