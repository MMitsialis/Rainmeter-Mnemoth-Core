; Include file for Top 5 I/O Proces

; @includeMeasures1=Measures-Top3_IO.inc

;  Measures

[MeasureTopIORead4]
Measure=Plugin
Plugin=UsageMonitor
Alias=IORead
Index=4

[MeasureTopIOReadScaled4]
Measure=Calc
Formula=MeasureTopIORead4

[MeasureTopIORead5]
Measure=Plugin
Plugin=UsageMonitor
Alias=IORead
Index=5

[MeasureTopIOReadScaled5]
Measure=Calc
Formula=MeasureTopIORead5

