/*
  ==============================================================================

    Slider.h
    Created: 6 Sep 2019 7:11:44am
    Author:  Silver

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class RotarySlider
:   public Slider
{
public:
    
    RotarySlider();
    
    ~RotarySlider();
    
private:
    
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> mAttachment;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(RotarySlider);
};
