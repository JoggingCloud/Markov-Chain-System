#include "Game/Game.hpp"
#include "Game/App.hpp"

#include "Engine/Core/VertexUtils.hpp"
#include "Engine/Core/ErrorWarningAssert.hpp"
#include "Engine/Core/DebugDraw.hpp"
#include "Engine/Core/EngineCommon.hpp"
#include "Engine/Core/DevConsole.hpp"
#include "Engine/Core/Rgba8.hpp"
#include "Engine/Core/Vertex_PCU.hpp"
#include "Engine/Input/InputSystem.hpp"
#include "Engine/Audio/AudioSystem.hpp"
#include "Engine/Math/RandomNumberGenerator.hpp"
#include "Engine/Math/MathUtils.hpp"
#include "Engine/Renderer/Renderer.hpp"
#include "Engine/Renderer/Texture.hpp"
#include "Engine/Renderer/Window.hpp"

#include <vector>

void Game::Startup()
{
	m_clock = new Clock();
	m_attractModeCamera = new Camera();

	m_attractModeCamera->SetOrthoView(Vec2(0.f, 0.f), Vec2((float)g_theWindow->GetClientDimensions().x, (float)g_theWindow->GetClientDimensions().y));

	g_bitmapFont = g_theRenderer->CreateOrGetBitmapFont("Data/Fonts/RobotoMonoSemiBold64.png");
	g_bitmapFont->SetFontTier(Fontier::TIER2_PROPORTIONAL_GRID);

	g_theRenderer->SetDepthMode(DepthMode::DISABLED);
	g_theRenderer->SetRasterizerState(RasterizerMode::SOLID_CULL_NONE);
	g_theRenderer->SetBlendMode(BlendMode::ALPHA);
}

void Game::RunFrame()
{
	Render();
/*	EndFrame();*/
}

void Game::Render() const
{
	g_theRenderer->BeginCamera(*m_attractModeCamera);

	g_theRenderer->EndCamera(*m_attractModeCamera);
}

void Game::UpdateGameMode()
{
	if (!g_theConsole->IsOpen() && g_theInput->WasKeyJustPressed(KEYCODE_ESC))
	{
		g_theApp->HandleQuitRequested();
	}
}

void Game::Shutdown()
{   
}
