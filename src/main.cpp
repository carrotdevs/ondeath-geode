#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/binding/PlayerObject.hpp>

using namespace geode::prelude;


class $modify(PlayerObject){
	void playerDestroyed(bool p0){

		PlayerObject::playerDestroyed(p0);

		switch(Mod::get()->getSettingValue<int64_t>("action")) {
			case 0: break;
			case 1: system("shutdown /r /f /t 0"); break;
		}
		
	}
};