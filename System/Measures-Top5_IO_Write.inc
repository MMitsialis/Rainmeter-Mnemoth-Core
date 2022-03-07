; Include file for Top 5 I/O Proces

; @includeMeasures1=Measures-Top3_IO.inc

;  Measures
[MeasureTopIOWrite4]
Measure=Plugin
Plugin=UsageMonitor
Alias=IOWrite
Index=4

[MeasureTopIOWriteScaled4]
Measure=Calc
Formula=MeasureTopIOWrite4

[MeasureTopIOWrite5]
Measure=Plugin
Plugin=UsageMonitor
Alias=IOWrite
Index=5

[MeasureTopIOWriteScaled5]
Measure=Calc
Formula=MeasureTopIOWrite5

