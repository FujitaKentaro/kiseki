#pragma once
#include "SceneManager.h"
#include "SceneObjects.h"
#include "ParticleManager.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Camera.h"

class SceneManager;

// シーン管理のための基底クラス
// (純粋基底クラス)

class IScene
{
protected:

	SceneManager* _controller;
	SceneObjects* _objects;

public:

	IScene();
	virtual ~IScene();

	//virtual Scene Create(SceneManager& controller) = 0;
	/// シーンの更新を行う
	virtual void Initialize() = 0;

	/// シーンの更新を行う
	virtual void Update(Input* input) = 0;

	/// シーンの描画を行う
	virtual void Draw() = 0;

};

