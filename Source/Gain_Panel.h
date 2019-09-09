/*
  ==============================================================================

    Gain_Panel.h
    Created: 6 Sep 2019 7:10:29am
    Author:  Silver

  ==============================================================================
*/

#pragma once

#include "Panel_Base.h"
#include "Rotary_Slider.h"

class GainPanel
:   public PanelBase
{
public:
    GainPanel(MyDelayPluginAudioProcessor* inProcessor);
    ~GainPanel();
    
    void paint(Graphics& g) override;
    
private:
    
    std::unique_ptr<RotarySlider> mGainSlider;
    std::unique_ptr<Label> mGainLabel;
};
