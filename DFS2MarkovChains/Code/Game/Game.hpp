#pragma once
#include "Game/GameCommon.hpp"

class Clock;
class Camera;

class Game
{
public:
	Game() = default; 
	~Game() = default;
	void Startup();
	void Shutdown();
	void RunFrame();
 	void Render() const;
	void UpdateGameMode();

private:
	Clock* m_clock = nullptr;
	Camera* m_attractModeCamera = nullptr;
};
