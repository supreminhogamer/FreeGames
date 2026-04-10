#pragma once
#include <Geode/Bindings.hpp>
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>
class WorldLevel : public geode::Popup<std::string const&> {

protected:
    bool init(std::string const& value);

public:
    static WorldLevel* create(std::string const& text);
    static cocos2d::CCScene* scene(std::string const& text);

private:
    


  
    void keyBackClicked() override;
    void updatePageWithObject(CCObject* page, CCObject* object) override;
    void onClose(CCObject*);
    int m_level;
};

