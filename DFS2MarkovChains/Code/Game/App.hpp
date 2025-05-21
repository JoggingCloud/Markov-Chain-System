#pragma once // Means ot not copy this file more than once. Every header file will have this 
#include "Engine/Core/EventSystem.hpp"
#include <cstdlib>
#include <bitset>

class Game;
class Clock;

class App
{
public:
	Game* m_game = nullptr;
public:
	App() = default; // Construction
	~App(); // Destruction
	void Startup();
	void Shutdown();
	void RunFrame();
	void Run();

	void LoadDefaultGameData();
	bool IsQuitting() const { return m_isQuitting; }
	bool HandleQuitRequested();

	static bool Event_Quit(EventArgs& args);
	static bool Event_WindowMinimized(EventArgs& args);
	static bool Event_WindowMaximized(EventArgs& args);
	static bool Event_WindowRestored(EventArgs& args);

private:
	void BeginFrame();
	void Update();
	void Render() const;
	void EndFrame();

private:
	Clock* m_clock = nullptr;
	bool m_isQuitting = false;
	bool m_isPaused = false;
};