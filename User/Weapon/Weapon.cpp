#include "Weapon.h"
#include <cassert>

Weapon::Weapon() {

}
Weapon::~Weapon() {

}
Weapon* Weapon::Create()
{
	return this;
}
/// 更新を行う
bool Weapon::Initialize() {

	return true;
}

/// 更新を行う
void Weapon::Update(Input* input, bool isSlow) {
	assert(input);
	if (isSlow == false) {

	}
}

/// 描画を行う
void Weapon::Draw(DirectXCommon* dxCommon) {
	assert(dxCommon);
}

/// リセットを行う
void Weapon::Reset() {

}

// 発射を行う
void Weapon::Shot(Transform& player, Transform& reticle) {
	player;
	reticle;
}