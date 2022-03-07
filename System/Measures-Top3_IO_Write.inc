; Include file for Top 5 I/O Proces


; Measures

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

[MeasureTopIORead4]
Measure=Plugin
Plugin=UsageMonitor
Alias=IORead
Index=4

[MeasureTopIOReadScaled4]
Measure=Calc
Formula=MeasureTopIORead4

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


