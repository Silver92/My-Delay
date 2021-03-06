# A Delay Audio Plugin

## Introduction

A delay audio plugin that can be deployed on most Digital Audio Workstations (DAW).  The plugin supports the alignment from the delay time to the exact beat time (in seconds). This helps the user try their optimal delay beats and save the calculation time for the beats alignments by simply clicking the delay time mode button.

<img src="https://github.com/Silver92/My-Delay/blob/Develop/Sample%20Pictures/Screen%20Shot%202020-01-14%20at%2020.03.50.png" style="zoom:30%" align="center"/>

<img src="https://github.com/Silver92/My-Delay/blob/Develop/Sample%20Pictures/Screen%20Shot%202020-01-14%20at%2020.03.33.png" style="zoom:30%" align="center"/>

The user is able to make the delay effect by modifying 5 parameters:

Input:		A parameter to adjust the input signal level in dBFS.

Time:		A parameter to adjust the delay time for the delay signal.

Time Mode Button:  A button to align the delay time to the exact beat time or to turn the beat time to continuous time value

Feedback: 	A parameter to adjust the damping factor of the delay signal.

Dry/Wet: 	A parameter to adjust the dry/wet ratio of the output signal.

Output: 		A parameter to adjust the output signal level in dBFS.

## Compile the Project

A simple way to compile the project:

1. Download the latest version of the Juce Framework.

   https://shop.juce.com/get-juce/download

2. download the project or simply using the git clone command in the console:``

   `git clone https://github.com/Silver92/My-Delay.git`

3. Open the projucer in the Juce Framework folder then select the open button in the File panel, or select the "Open Existing Project" in the New Project guiding panel.

   <img src="https://github.com/Silver92/My-Delay/blob/Develop/Sample Pictures/Screen Shot 2019-11-11 at 19.08.05.png" alt="Screen Shot 2019-11-11 at 19.08.05" style="zoom:30%" align="center" />

4. Find the directory of the project and select the ".jucer" file

5. Selected the exporter for the project based on the OS and click "save and open in IDE" button on the right side

   <img src="https://github.com/Silver92/My-Delay/blob/Develop/Sample Pictures/Screen Shot 2019-11-11 at 19.08.24.png" alt="Screen Shot 2019-11-11 at 19.08.24" style="zoom:40%" align="center" />

## Other Questions

The project is developed and tested under the Mac + Xcode environment. Users who compile in Windows OS may have following problems:

<img src="https://github.com/Silver92/My-Delay/blob/Develop/Sample Pictures/Screen Shot 2019-11-11 at 19.20.16.png" alt="Screen Shot 2019-11-11 at 19.20.16" style="zoom:30%" align="center" />

1. There may be some lost path of the JUCE models

   Select the "..." button on the right side of the "path to JUCE" or "JUCE Modules" panel to locate the folder of the downloaded framework

2. Under Windows OS the users need to download VST3 SDK and add the path to the juce client app in order to export the correct format of audio plugin.

   VST3 SDK link:

   https://www.steinberg.net/en/company/developers.html

   

For mor information about the juce setup, please see the tutorials below:

https://docs.juce.com/master/tutorial_new_projucer_project.html

https://docs.juce.com/master/tutorial_manage_projucer_project.html