#ifndef CONSOLEBACKEND_H
#define CONSOLEBACKEND_H

#include <chip8/Backend.h>

namespace chip8
{
	class TerminalBackend : public Backend
	{
	public:
		bool Render(Framebuffer & fb) override;
		bool GetKeyState(u8 index) override;
		void SetAudio(Audio *audio) override { }

	private:
		void SetCursor(int y, int x);
		void Print(const char * what, int bgColor);
		void Print(const char * what, int bgColor, int fgColor);
	};
}

#endif
