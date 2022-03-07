[Rainmeter]
Update=2500
Background=#@#Background.png
; #@# is equal to Rainmeter\Skins\illustro\@Resources
BackgroundMode=3
BackgroundMargins=0,34,0,14

[Metadata]
Name=System
Author=mmitsialis
Information=Displays basic system stats.
License=Creative Commons BY-NC-SA 3.0
Version=0.1.0

[Variables]
; Variables declared here can be used later on between two # characters (e.g. #MyVariable#).
fontName=Trebuchet MS
textSize=8
colorBar=235,170,0,255
colorText=255,255,255,205

; ----------------------------------
; MEASURES return some kind of value
; ----------------------------------

[measureCPU1]
; This measure returns the average CPU load between all cores.
Measure=CPU
Processor=0
IfCondition=MeasureCPU > 80
IfTrueAction=[!SetOption meterValueCPU FontColor "255,0,0"]
IfFalseAction=[!SetOption meterValueCPU FontColor "0,255,0"]
UpdateDivider=5

[measureCPU2]
; This measure returns the average CPU load between all cores.
Measure=CPU
Processor=1
IfCondition=MeasureCPU > 80
IfTrueAction=[!SetOption meterValueCPU FontColor "255,0,0"]
IfFalseAction=[!SetOption meterValueCPU FontColor "0,255,0"]
UpdateDivider=5

[measureRAM]
; Returns the amount of RAM used in bytes.
Measure=PhysicalMemory
UpdateDivider=20
; UpdateDivider sets the rate at which the value of the measure is updated. It is
; calculated as follows: UpdateDivider x Update. In this case, Update is set to
; 1000 milliseconds (in the [Rainmeter] section). 1000 x 20 = 20000 ms or 20 seconds.
IfCondition=measureRAM > 75
IfTrueAction=[!SetOption meterValueRAM FontColor "255,0,0"]
IfFalseAction=[!SetOption meterValueRAM FontColor "0,255,0"]

[measureSWAP]
; Returns the amount of SWAP (pagefile) used in bytes.
Measure=SwapMemory
UpdateDivider=20
IfCondition=measureSWAP > 75
IfTrueAction=[!SetOption meterValueSWAP FontColor "255,0,0"]
IfFalseAction=[!SetOption meterValueSWAP FontColor "0,255,0"]

[MeasureTopGPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
; UpdateDivider=20
Index=1
MinValue=0
MaxValue=100
Blacklist=dwm|csrss

[MeasureTotalThreads]
Measure=Plugin
Plugin=UsageMonitor
Category=System
Counter=Threads
Index=0

[MeasureTopIORead1]
Measure=Plugin
Plugin=UsageMonitor
Alias=IORead
Index=1

[MeasureTopIOReadScaled1]
Measure=Calc
Formula=MeasureTopIORead1

[MeasureTopIORead2]
Measure=Plugin
Plugin=UsageMonitor
Alias=IORead
Index=2

[MeasureTopIOReadScaled2]
Measure=Calc
Formula=MeasureTopIORead2

[MeasureTopIORead3]
Measure=Plugin
Plugin=UsageMonitor
Alias=IORead
Index=3

[MeasureTopIOReadScaled3]
Measure=Calc
Formula=MeasureTopIORead3

; [MeasureTopIORead4]
; Measure=Plugin
; Plugin=UsageMonitor
; Alias=IORead
; Index=4

; [MeasureTopIOReadScaled4]
; Measure=Calc
; Formula=MeasureTopIORead4

; [MeasureTopIORead5]
; Measure=Plugin
; Plugin=UsageMonitor
; Alias=IORead
; Index=5

; [MeasureTopIOReadScaled5]
; Measure=Calc
; Formula=MeasureTopIORead5

[MeasureTopIOWrite1]
Measure=Plugin
Plugin=UsageMonitor
Alias=IOWrite
Index=1

[MeasureTopIOWriteScaled1]
Measure=Calc
Formula=MeasureTopIOWrite1

[MeasureTopIOWrite2]
Measure=Plugin
Plugin=UsageMonitor
Alias=IOWrite
Index=2

[MeasureTopIOWriteScaled2]
Measure=Calc
Formula=MeasureTopIOWrite2

[MeasureTopIOWrite3]
Measure=Plugin
Plugin=UsageMonitor
Alias=IOWrite
Index=3

[MeasureTopIOWriteScaled3]
Measure=Calc
Formula=MeasureTopIOWrite3

; [MeasureTopIOWrite4]
; Measure=Plugin
; Plugin=UsageMonitor
; Alias=IOWrite
; Index=4

; [MeasureTopIOWriteScaled4]
; Measure=Calc
; Formula=MeasureTopIOWrite4

; [MeasureTopIOWrite5]
; Measure=Plugin
; Plugin=UsageMonitor
; Alias=IOWrite
; Index=5

; [MeasureTopIOWriteScaled5]
; Measure=Calc
; Formula=MeasureTopIOWrite5



; ----------------------------------
; METERS display images, text, bars, etc.
; ----------------------------------

[meterTitle]
Meter=String
MeterStyle=styleTitle
; Using MeterStyle=styleTitle will basically "copy" the
; contents of the [styleTitle] section here during runtime.
; X=(#SCREENAREAWIDTH#-200)
X=100
Y=10
W=190
H=18
Text=System
; Even though the text is set to System, Rainmeter will display
; it as SYSTEM, because styleTitle contains StringCase=Upper.
LeftMouseUpAction=["taskmgr.exe"]
; Left-clicking this meter will launch taskmgr.exe (the Task Manager).
ToolTipText=Open Task Manager
; Hovering over this meter will display a tooltip with the text above.

[meterLabelCPU1]
Meter=String
MeterStyle=styleLeftText
X=10
Y=40
W=190
H=14
Text=CPU Usage #1

[meterValueCPU1]
Meter=String
MeterStyle=styleRightText
MeasureName=measureCPU1
X=200
Y=0r
; r stands for relative. In this case, the Y position of meterValueCPU is 0 pixels
; below the Y value of the previous meter (i.e it's the same as in meterLabelCPU).
W=190
H=14
Text=%1%
; %1 stands for the value of MeasureName (measureCPU in this case).

[meterBarCPU1]
Meter=Bar
MeterStyle=styleBar
MeasureName=measureCPU1
X=10
Y=52
W=190
H=1

[meterLabelCPU2]
Meter=String
MeterStyle=styleLeftText
X=10
; Y=60
Y=8r
W=190
H=14
Text=CPU Usage #2

[meterValueCPU2]
Meter=String
MeterStyle=styleRightText
MeasureName=measureCPU2
X=200
Y=0r
; r stands for relative. In this case, the Y position of meterValueCPU is 0 pixels
; below the Y value of the previous meter (i.e it's the same as in meterLabelCPU).
W=190
H=14
Text=%1%
; %1 stands for the value of MeasureName (measureCPU in this case).

[meterBarCPU2]
Meter=Bar
MeterStyle=styleBar
MeasureName=measureCPU1
X=10
Y=72
W=190
H=1

[meterLabelRAM]
Meter=String
MeterStyle=styleLeftText
X=10
Y=8r
W=190
H=14
Text=RAM Usage

[meterValueRAM]
Meter=String
MeterStyle=styleRightText
MeasureName=measureRAM
X=200
Y=0r
W=190
H=14
Text=%1%
Percentual=1
; Percentual=1 needs to be added her because measureRAM returns the amount
; of RAM used in bytes. Using Percentual=1 will convert that into a percentual value.

[meterBarRAM]
Meter=Bar
MeterStyle=styleBar
MeasureName=measureRAM
X=10
Y=92
W=190
H=1

[meterLabelSWAP]
Meter=String
MeterStyle=styleLeftText
X=10
Y=8r
W=190
H=14
Text=SWAP Usage

[meterValueSWAP]
Meter=String
MeterStyle=styleRightText
MeasureName=measureSWAP
X=200
Y=0r
W=190
H=14
Text=%1%
Percentual=1

[meterBarSWAP]
Meter=Bar
MeterStyle=styleBar
MeasureName=measureSWAP
X=10
Y=112
W=190
H=1

[MeterLabelTopGPU]
Meter=String
MeterStyle=styleLeftText
X=10
Y=8r
W=190
H=14
Text=GPU: [MeasureTopGPU]

[MeterValueTopGPU]
Meter=String
MeterStyle=styleRightText
X=200
Y=0r
W=190
H=14
Text=[MeasureTopGPU:1]%

[MeterLabelTotalThreads]
Meter=String
MeterStyle=styleLeftText
X=10
Y=140
W=190
H=14
Text=Total Threads

[MeterValueTotalThreads]
Meter=String
MeterStyle=styleRightText
; MeterStyle=styleRightText | styleRightText
X=200
Y=0r
W=190
H=14
Text=[MeasureTotalThreads:0]

[meterLabelIORead1]
Meter=String
MeterStyle=styleLeftText
X=10
Y=20r
W=190
H=14
Text=I/O Read  #1 [MeasureTopIORead1]

[meterValueIORead1]
Meter=String
MeterStyle=styleRightText
MeasureName=MeasureTopIOReadScaled1
X=200
Y=0r
W=190
H=14
AutoScale=1
NumOfDecimals=1
Text=%1B

[meterLabelIORead2]
Meter=String
MeterStyle=styleLeftText
X=10
Y=20r
W=190
H=14
Text=I/O Read  #2 [MeasureTopIORead2]

[meterValueIORead2]
Meter=String
MeterStyle=styleRightText
MeasureName=MeasureTopIOReadScaled2
X=200
Y=0r
W=190
H=14
AutoScale=1
NumOfDecimals=1
Text=%1B

[meterLabelIORead3]
Meter=String
MeterStyle=styleLeftText
X=10
Y=20r
W=190
H=14
Text=I/O Read  #3 [MeasureTopIORead3]

[meterValueIORead3]
Meter=String
MeterStyle=styleRightText
MeasureName=MeasureTopIOReadScaled3
X=200
Y=0r
W=190
H=14
AutoScale=1
NumOfDecimals=1
Text=%1B

; [meterLabelIORead4]
; Meter=String
; MeterStyle=styleLeftText
; X=10
; Y=20r
; W=190
; H=14
; Text=I/O Read  #4 [MeasureTopIORead4]

; [meterValueIORead4]
; Meter=String
; MeterStyle=styleRightText
; MeasureName=MeasureTopIOReadScaled4
; X=200
; Y=0r
; W=190
; H=14
; AutoScale=1
; NumOfDecimals=1
; Text=%1B

; [meterLabelIORead5]
; Meter=String
; MeterStyle=styleLeftText
; X=10
; Y=20r
; W=190
; H=14
; Text=I/O Read  #5 [MeasureTopIORead5]

; [meterValueIORead5]
; Meter=String
; MeterStyle=styleRightText
; MeasureName=MeasureTopIOReadScaled5
; X=200
; Y=0r
; W=190
; H=14
; AutoScale=1
; NumOfDecimals=1
; Text=%1B

[meterLabelIOWrite1]
Meter=String
MeterStyle=styleLeftText
X=10
Y=40r
W=190
H=14
Text=I/O Write  #1 [MeasureTopIOWrite1]

[meterValueIOWrite1]
Meter=String
MeterStyle=styleRightText
MeasureName=MeasureTopIOWriteScaled1
X=200
Y=0r
W=190
H=14
AutoScale=1
NumOfDecimals=1
Text=%1B

[meterLabelIOWrite2]
Meter=String
MeterStyle=styleLeftText
X=10
Y=20r
W=190
H=14
Text=I/O Write  #2 [MeasureTopIOWrite2]

[meterValueIOWrite2]
Meter=String
MeterStyle=styleRightText
MeasureName=MeasureTopIOWriteScaled2
X=200
Y=0r
W=190
H=14
AutoScale=1
NumOfDecimals=1
Text=%1B

[meterLabelIOWrite3]
Meter=String
MeterStyle=styleLeftText
X=10
Y=20r
W=190
H=14
Text=I/O Write  #3 [MeasureTopIOWrite3]

[meterValueIOWrite3]
Meter=String
MeterStyle=styleRightText
MeasureName=MeasureTopIOWriteScaled3
X=200
Y=0r
W=190
H=14
AutoScale=1
NumOfDecimals=1
Text=%1B

; [meterLabelIOWrite4]
; Meter=String
; MeterStyle=styleLeftText
; X=10
; Y=20r
; W=190
; H=14
; Text=I/O Write  #4 [MeasureTopIOWrite4]

; [meterValueIOWrite4]
; Meter=String
; MeterStyle=styleRightText
; MeasureName=MeasureTopIOWriteScaled4
; X=200
; Y=0r
; W=190
; H=14
; AutoScale=1
; NumOfDecimals=1
; Text=%1B

; [meterLabelIOWrite5]
; Meter=String
; MeterStyle=styleLeftText
; X=10
; Y=20r
; W=190
; H=14
; Text=I/O Write  #5 [MeasureTopIOWrite5]

; [meterValueIOWrite5]
; Meter=String
; MeterStyle=styleRightText
; MeasureName=MeasureTopIOWriteScaled5
; X=200
; Y=0r
; W=190
; H=14
; AutoScale=1
; NumOfDecimals=1
; Text=%1B



; ----------------------------------
; STYLES are used to "centralize" options
; ----------------------------------

[styleTitle]
StringAlign=Center
StringCase=Upper
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,50
FontColor=#colorText#
FontFace=#fontName#
FontSize=10
AntiAlias=1
ClipString=1
DynamicVariables=1

[styleAll]
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1
DynamicVariables=1

[styleLeftText]
StringAlign=Left
; Meters using styleLeftText will be left-aligned.
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1
DynamicVariables=1

[styleRightText]
StringAlign=Right
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1
DynamicVariables=1

[styleBar]
BarColor=#colorBar#
BarOrientation=HORIZONTAL
SolidColor=255,255,255,15

