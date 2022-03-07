
; ----------------------------------
; METERS display images, text, bars, etc.
; ----------------------------------


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



