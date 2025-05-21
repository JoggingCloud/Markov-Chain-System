#pragma once

class Renderer;
class App;
class AudioSystem;
class InputSystem;
class RandomNumberGenerator;

extern Renderer*             g_theRenderer;
extern App*                  g_theApp;
extern InputSystem*          g_theInput;
extern AudioSystem*          g_theAudio;
extern RandomNumberGenerator g_rng;