#pragma once
#include "graphics_lib\ICanvas.h"
#include "modern_graphics_lib\ModernGraphicsRenderer.h"

namespace app
{
	class CModernCanvasAdapter : public graphics_lib::ICanvas
	{
	public:
		CModernCanvasAdapter(modern_graphics_lib::CModernGraphicsRenderer & renderer);

		void MoveTo(int x, int y) override;
		void LineTo(int x, int y) override;
	
	private:
		modern_graphics_lib::CModernGraphicsRenderer & m_renderer;
		modern_graphics_lib::CPoint m_start = { 0, 0 };
	};
}
