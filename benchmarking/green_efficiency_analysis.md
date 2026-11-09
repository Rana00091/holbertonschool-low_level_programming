# Green Efficiency Analysis

## Measurement Methodology

The analysis uses the execution-time outputs recorded from three
programs: an algorithm comparison, a baseline loop, and a staged
data-processing program. The algorithm comparison was run three times.
Each run recorded the result and elapsed time for both the naive
algorithm and the single-pass algorithm. The baseline loop was also run
three times with the same reported workload of 100,000,000 iterations.
The data-processing program reported a total duration and separate
durations for its build, process, and reduce stages.

The measurements are treated as observations from the recorded runs, not
as universal performance guarantees. For the algorithm comparison, the
naive times were 2.704203, 2.694203, and 2.682449 seconds. The
single-pass times were 0.000104, 0.000103, and 0.000107 seconds. For the
baseline loop, the three times were 0.220985, 0.221124, and 0.224159
seconds. The staged program reported 0.000868 seconds total: 0.000391
seconds for BUILD_DATA, 0.000333 seconds for PROCESS, and 0.000139
seconds for REDUCE.

## Observed Performance Differences

In every recorded comparison run, the single-pass algorithm took
substantially less time than the naive algorithm. The naive algorithm's
average measured time was approximately 2.693618 seconds, while the
single-pass algorithm's average was approximately 0.000105 seconds.
Dividing those averages gives a measured runtime ratio of about 25,700
to 1. This ratio describes these recorded executions only. It should not
be interpreted as a guaranteed speedup for other inputs or machines.

The output values also differed: the naive algorithm returned 625025000
in all three runs, while the single-pass algorithm returned 25000 in all
three runs. Because the recorded results are not equal, the timing
comparison alone does not establish that the two implementations perform
identical work or produce equivalent answers. That difference must be
investigated before treating the faster implementation as a valid
replacement.

The baseline loop processed 100,000,000 iterations in each run. Its
times ranged from 0.220985 to 0.224159 seconds, a spread of 0.003174
seconds. The staged program's reported total was 0.000868 seconds. Its
three stage times add to 0.000863 seconds, which is 0.000005 seconds
below the reported total. This small difference may reflect timing
boundaries or measurement/reporting precision; the output does not
identify the cause.

## Relation Between Runtime and Energy Consumption

The measurements establish differences in execution time, but they do
not directly measure energy consumption. A shorter runtime can reduce
the time during which a processor is active, but these outputs contain
no power readings, energy readings, CPU utilization data, or hardware
counters. Therefore, it would not be evidence-based to claim a specific
energy saving or to convert the runtime ratio into an energy ratio. The
recorded results support a performance conclusion, not a quantified
energy-efficiency conclusion.

## Limitations of the Experiment

The outputs do not record the processor model, compiler version and
flags, operating-system state, background workload, temperature, or
measurement tool and its resolution. Only three runs are available for
each repeated test. The algorithm outputs differ, so functional
equivalence has not been demonstrated. The baseline loop and staged
data-processing program also report different workloads and should not
be ranked against each other as if they were identical tests. Finally,
no direct energy measurement was recorded.

## Practical Engineering Takeaway

The recorded timings show that algorithm choice can have a very large
effect on runtime: the single-pass implementation was consistently
faster in all three comparisons. However, its different result means
correctness must be checked before adopting it. A sound engineering
decision should first verify that implementations solve the same problem
and return equivalent results, then repeat benchmarks under documented,
controlled conditions. If energy efficiency is a project requirement,
measure energy or power directly alongside runtime. The current evidence
justifies investigating the single-pass approach for performance, but it
does not yet prove equivalent behavior or a measured reduction in energy
use.
