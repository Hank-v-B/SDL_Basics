#pragma once
#include "EngineBase.h"
#include "Basics.h"

class FontScaler :  public EngineBase
{
	FontScaler();

	virtual bool EngineBase::OnInit(SDL_Renderer* rend, SDL_Window* win);
	virtual int EngineBase::OnExecute();
	virtual void EngineBase::OnLoop() ;
	virtual void EngineBase::OnRender();
	virtual void EngineBase::OnCleanup() ;
	virtual void EngineBase::OnExit() ;
	virtual void EngineBase::OnEvent(SDL_Event* event);

private:

protected:
	unordered_map<char, vector<SDL_FPoint>> _fontPoints;

	void TextureToPointlist(const char chr, SDL_Surface* surf);

};

