
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

